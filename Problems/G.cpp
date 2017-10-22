#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long ullong;
#define MAXP 1400000

namespace SieveLP {

// Linear-time prime sieve
// http://e-maxx.ru/algo/prime_sieve_linear

int lp[MAXP+1];  // lp[n] = least prime divisor of n
vector<int> primes;
#ifdef COMPUTE_PHI
int phi[N + 1];
#endif
void sieve() {
#ifdef COMPUTE_PHI
   phi[1] = 1;
#endif
   for (int i = 2; i <= MAXP; ++i) {
      if (lp[i] == 0) {
         lp[i] = i;
         primes.push_back(i);
#ifdef COMPUTE_PHI
         phi[i] = i - 1;
#endif
      }
#ifdef COMPUTE_PHI
      else {
         //Calculating phi
         if (lp[i] == lp[i / lp[i]])
            phi[i] = phi[i / lp[i]] * lp[i];
         else
            phi[i] = phi[i / lp[i]] * (lp[i] - 1);
      }
#endif
      for (int j = 0; j < int(primes.size()) && primes[j] <= lp[i]; ++j) {
         ullong xj = i*ullong(primes[j]);
         if (xj > MAXP) break;
         lp[xj] = primes[j];
      }
   }
}

}

int const INF = -1400000;


const long long NEUTRAL_VAL = -1400000;  // 0 for sum, -INF for max, +INF for min, 0 for gcd
struct SegmentTreeNode {
   long long sum;

   SegmentTreeNode(long long _val = NEUTRAL_VAL) : sum(_val) { }

   SegmentTreeNode operator+(const SegmentTreeNode& pR) const {
      SegmentTreeNode res;
      res.sum = max(sum, pR.sum);
      return res;
   }
};

class SegmentTree {
   int N;
   vector<SegmentTreeNode> tree;

   void _build(const vector<int>& A, int node, int L, int R);
   void _update(int idx, int val, int node, int L, int R);
   SegmentTreeNode _query(int p, int q, int node, int L, int R) const;

public:
   SegmentTree(const vector<int>& A) {
      N = A.size();
   // int NUM_NODES = 2 * ( 1 << int( floor(log(N)/log(2))+1 ) ) + 1;
   // int NUM_NODES = 2 * ( 1 << int( ceil(log(N)/log(2)) ) );   // not tested
   // int NUM_NODES = N > 1 ? 2 * ( 1 << (HIGHESTSETBIT(N-1)+1) ) : 2;
      int NUM_NODES = 4*N;
      tree = vector<SegmentTreeNode>(NUM_NODES);
      _build(A, 1, 0, N-1);
   }

   void update(int idx, int val) {
      _update(idx, val, 1, 0, N-1);
   }

   SegmentTreeNode query(int p, int q) {
      return _query(p, q, 1, 0, N-1);
   }

};


void SegmentTree::_build(const vector<int>& A, int node, int L, int R) {
   if (L == R) {
      tree[node] = SegmentTreeNode(A[L]);
      return;
   }

   //compute the values in the left and right subtrees
   _build(A, 2*node, L, (L+R)/2);
   _build(A, 2*node+1, (L+R)/2+1, R);

   const SegmentTreeNode& pL = tree[2*node];
   const SegmentTreeNode& pR = tree[2*node+1];

   // merge the first and second half of the interval
   tree[node] = pL + pR;
}

void SegmentTree::_update(int idx, int val, int node, int L, int R) {
   if (idx < L || idx > R)
      return;

   if (L == R) {
      tree[node] = SegmentTreeNode(val);
      return;
   }

   //compute the values in the left and right subtrees
   _update(idx, val, 2*node, L, (L+R)/2);
   _update(idx, val, 2*node+1, (L+R)/2+1, R);

   const SegmentTreeNode& pL = tree[2*node];
   const SegmentTreeNode& pR = tree[2*node+1];

   // merge the first and second half of the interval
   tree[node] = pL + pR;
}

SegmentTreeNode SegmentTree::_query(int p, int q, int node, int L, int R) const {
   //if the current interval doesn't intersect the query interval return invalid interval
   if (p > R || q < L)
      return SegmentTreeNode();

   //if the current interval is included in the query interval return M[node]
   if (p <= L && R <= q)
      return tree[node];

   //compute answer in the left and right part of the interval
   SegmentTreeNode pL = _query(p, q, 2*node, L, (L+R)/2);
   SegmentTreeNode pR = _query(p, q, 2*node+1, (L+R)/2+1, R);

   //merge the answer
   return pL + pR;
}



int main()
{
    SieveLP::sieve();

    vector<long long> gaps;
    gaps.push_back(-1);
    for(int i=0; i< SieveLP::primes.size()-1; i++){
        gaps.push_back(SieveLP::primes[i+1] - SieveLP::primes[i]);
    }
/*    for(int v : gaps){
        cout << v << " ";
    }*/
/*    for(int n : SieveLP::primes){
        cout << n << endl;
    }*/
    vector<int> gapsForAll;
    int cnt = 0;
    //gapsForAll.push_back(-1);
    for(int i=1; i<=1400000; i++){
        if(SieveLP::lp[i] == i){
            cnt++;
            gapsForAll.push_back(gaps[cnt]);
        }else{
            gapsForAll.push_back(gaps[cnt]);
        }
    }
   /* for(int i=0; i<gapsForAll.size(); i++){
        cout << "i: " << i+1 << " = " << gapsForAll[i] << " | ";
    }
    cout << endl;*/

    SegmentTree Tree(gapsForAll);
    int a,b;
    while((cin >> a >> b) && (a != 0 && b != 0) ){
        // a--; b--;
        // SegmentTreeNode res = Tree.query(a,b);
        int indxFirstPrime =  lower_bound( SieveLP::primes.begin(), SieveLP::primes.end(),a)- SieveLP::primes.begin();
        int indxSecondPrime = lower_bound( SieveLP::primes.begin(), SieveLP::primes.end(),b)- SieveLP::primes.begin();
        int firstPrime = SieveLP::primes[indxFirstPrime];
        int secondPrime = SieveLP::primes[indxSecondPrime];
        if(firstPrime < a){
            cout << "NULL" << endl;
        }else{
            if(secondPrime > b){
              secondPrime = SieveLP::primes[indxSecondPrime-1];
            }
            cout << "second: " << secondPrime << " first: " << firstPrime << endl;
            cout << secondPrime - firstPrime << endl;
        }
        // if(res.sum == -1) cout << "NULL" << endl;
        // else cout << res.sum << endl;
    }




    return 0;
}
