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
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<long long> VLL;
typedef pair<int, int> ii;
typedef map<int,int> FREQ;

VLL rooms;
VLL PS;
bool check(int N, ll target) {
   if (PS[N] < target ) {
       return false;
   } 
   else return true;
} 

int binary_search_simple(int lo, int hi, ll target) {
   int res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      ll mid = lo + (hi - lo) / 2;
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
    ll N, M;
    cin >> N >> M;
    ll acc = 0;
    for(int i = 0; i < N; i++) {
        ll x;
        cin >> x;
        rooms.pb(x);
        acc += x;
        PS.pb(acc);
    }

    for(int i = 0; i < M; i++) {
        ll x;
        cin >> x;
        int ans = binary_search_simple(0, rooms.size()-1, x);
		ll roomc;
		if (ans == 0) {
			roomc = x;
		}
		else {
			roomc = x - PS[ans-1];
		}
		cout << ans+1 << ' ' << roomc << endl;
    }

    return 0;
}
