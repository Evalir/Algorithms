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

int N, C;
int maxv = 0;
map<int, int> stalls;

// bool check(int mid) {
//     int ncows = 0;
//     int currdist = -1;
//     int lcowd = 0;
//     bool first = 1;
//     for(int i = 0; i <= maxv; i++) {
//         currdist++;
//         //cout << "CHECKING DIST " << currdist << " WITH MID: " << mid << endl;
//         if (first == 1) {
//             if (stalls[i] > 0) {
//                 ncows++;
//               //  cout << "PUT COW AT " << i << endl;
//                 lcowd = i;
//                 first = 0;
//             }
//         }
//         else {
//             if (stalls[i] > 0 && abs(currdist - lcowd) >= mid) {
//                 ncows++;
//                 lcowd = i;
//           //      cout << "FOUND STALL AT " << i << endl;
//             }
//         }

//         if (ncows == C) return true;
//     }

//     if (ncows >= C) return true;
//     else return false;
// }

bool check(int mid) {
   // cout << "HEY" << endl;
    int ncows = 0;
    int lcow = 0;
    bool first = 1;
    for(auto x : stalls) {
        if (first == 1) {
            //cout << "PUT COW AT " << i << endl;
            lcow = x.first;
            ncows++;
            first = 0;
        }
        else {
            if (abs(x.first - lcow) >= mid) {
                ncows++;
                lcow = x.first;
                //cout << "FOUND STALL AT " << x.first << endl;
            }
        }

        if (ncows == C) return true;
    }

    if (ncows >= C) return true;
    else return false;
}

int binary_search_simple(int lo, int hi) {
   int res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      bool chk = check(mid);
     // cerr << "lo: " << lo << "  hi: " << hi << "  mid: " << mid << "  chk: " << chk << endl;
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
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        stalls.clear();
        
        cin >> N >> C;
        for(int j = 0; j < N; j++) {
            int x;
            cin >> x;
            maxv = max(maxv, x);
            stalls[x]++;
        }
        //test check
        // for(int j = 0; j <= 10; j++) {
        //     cout << "j: " << j << " " << check(j) << endl;
        // }
        int res = binary_search_simple(0, maxv);

        cout << res << endl;
    }

    return 0;
}