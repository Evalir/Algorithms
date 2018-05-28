#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#include <sstream>
#define INF (int)1e9
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
#define READALL(vec) for(int i = 0; i < N; i++){int x; cin >> x; (vec).pb(x);}
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<long long> VLL;
typedef pair<int, int> ii;
typedef vector<vector<ii> > Graph;
typedef map<int,int> FREQ;

int N, Q, coins;
VI el;

bool check(int mid) {
    if (el[mid] <= coins) {
        //cout << "COIN " << el[mid] << " TRUE" << endl;
        return true;}
    else return false;
}

int binary_search_simple(int lo, int hi) {
   int res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      bool chk = check(mid);
      //cerr << "lo: " << lo << "  hi: " << hi << "  mid: " << mid << "  chk: " << chk << endl;
      if (chk) {
         lo = mid + 1;
         res = mid;     // if searching for last NO, move this line to else case  
      } else {
         hi = mid - 1;
      }
   }
   return res;
}

int main(){
    cin >> N;
    READALL(el);
    sort(all(el));
    cin >> Q;
    for(int i = 0; i < Q; i++) {
        cin >> coins;
        cout << binary_search_simple(0, N-1)+1 << endl;
    }

    return 0;
}