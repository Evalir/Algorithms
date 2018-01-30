#include <iostream>
#include <cstdio>
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

double P, C;

bool check(double N) {
    double evaluation = N*(pow(N, C*N));
    cerr << "F(X) IS: " << evaluation << endl;
    if (evaluation < P) return false;
    else return true;
}

double binary_search_simple(double lo, double hi) {
   double res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      double mid = lo + (hi - lo) / 2;
      bool chk = check(mid);
      cerr << "lo: " << lo << "  hi: " << hi << "  mid: " << mid << "  chk: " << chk << endl;
      if (chk) {
         hi = mid - 1.0e-7;
         res = mid;     // if searching for last NO, move this line to else case  
      } else {
         lo = mid + 1.0e-7;
      }
   }
   return res;
}


int main(){
    int T;
    cin >> T;
    while (T--) {
        cin >> P >> C;
        double ans = binary_search_simple(0.1, 8.0);
        printf("%.08f", ans);
    }
}