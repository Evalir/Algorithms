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
#define READALL(vec) for(int i = 0; i < N; i++){double x; cin >> x; (vec).pb(x);}
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<long long> VLL;
typedef pair<int, int> ii;
typedef vector<vector<ii> > Graph;
typedef map<int,int> FREQ;

vector<double> candles;
int N;
bool check(double K) {
   for(int i = 0; i < N; i++) {
       if (i != 0) {
           if (candles[i]-K > candles[i-1]+K) {
               cout << candles[i]-K << endl;
               continue;
           }
           else return false;
       }
   }
   return true;
} 

double binary_search_simple(double lo, double hi) {
   double res = -1.00; // remains -1 if no argument is good
   while (lo <= hi) {
      double mid = lo + (hi - lo) / 2.00;
      bool chk = check(mid);
      cerr << "lo: " << lo << "  hi: " << hi << "  mid: " << mid << "  chk: " << chk << endl;
      if (chk) {
        cout << "TRUE" << endl;
         hi = mid - 1;
         res = mid;     // if searching for last NO, move this line to else case  
      } else {
          cout << "FALSE" << endl;
         lo = mid + 1;
      }
   }
   return res;
}

int main(){
    long long l;
    cin >> N >> l;
    double lowestd = 0;
    READALL(candles);
    sort(all(candles));
    for(int i = 0; i < N; i++) {
        if (i != 0) lowestd = max(lowestd, abs(candles[i]-candles[i-1]));
        cout << abs(candles[i]-candles[i-1]) << endl;
    }
    cout << lowestd << " IS"<< endl;
    
    //double ans = binary_search_simple(0.00, 1000000000.0);
    for(int i = 1; i < N; i++) {
     cout << check(i) << endl;
    }
    //cout << ans << endl;

    return 0;
}