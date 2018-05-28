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

VI piles;
VI PS;
bool check(int N, int target) {
   if (PS[N] < target ) {
       return false;
   } 
   else return true;
} 

int binary_search_simple(int lo, int hi, int target) {
   int res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      bool chk = check(mid, target);
      //cerr << "lo: " << lo << "  hi: " << hi << "  mid: " << mid << "  chk: " << chk << endl;
      if (chk) {
         hi = mid - 1;
         res = mid;     // if searching for last NO, move this line to else case  
      } else {
         lo = mid + 1;
      }
   }
   return res;
}

int main(){
    int N;
    cin >> N;
    int acc = 0;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        piles.pb(x);
        acc += x;
        PS.pb(acc);
    }
    int Q;
    cin >> Q;
    for(int i = 0; i < Q; i++) {
        int x;
        cin >> x;
        int ans = binary_search_simple(0, piles.size()-1, x) + 1;
        cout << ans << endl;
    }

    return 0;
}