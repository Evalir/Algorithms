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

struct Friend { 
    int money, ff; 
    bool  operator<  ( const Friend& right ) const {
        if (money < right.money)
           return true;
        else
           return false;
     }
    };

vector<Friend> fr;
int n,d;

bool check(vector<Friend> &fr, int mid) {
    int sigmaIdx = 0;
    int lastMon = 0;

    for(int i = 0; i < fr.size(); i++) {
        sigmaIdx = max(sigmaIdx,fr[i].ff);
    }
    
    if (sigmaIdx >= mid) return true;
    else {
        sigmaIdx = 0;
        lastMon = 0;
        for(int i = 0; i < fr.size(); i++) {
            if (i == 0) {
                sigmaIdx += fr[i].ff;
                lastMon = fr[i].money;
                continue;
            }
            else {
                if (sigmaIdx >= mid) {
                    cout << "BOOM " << endl;
                    return true;
                }
                if (abs(fr[i].money - lastMon) > d) {
                    cout << "BIG SHAQ " << endl;
                    return false;
                }
                else {
                    sigmaIdx += fr[i].ff;
                    lastMon = fr[i].money;
                    cout << "CURRENT SIGMA " << sigmaIdx << endl;
                }
            }
        }
    }
    if (sigmaIdx >= mid) return true;
    else return false;
}

int bs_simple(int lo, int hi) {
   int res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      bool chk = check(fr, mid);
      cerr << "lo: " << lo << "  hi: " << hi << "  mid: " << mid << "  chk: " << chk << endl;
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
    
    cin >> n >> d;
    int maxind = 0;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        Friend z;
        z.money = x;
        z.ff = y;
        maxind += z.ff;
        fr.pb(z);
    }

    sort(all(fr));

    cout << bs_simple(0, maxind) << endl;





}