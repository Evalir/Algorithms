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
int maxv = 0;
#define READALL(vec) for(int i = 0; i < m; i++){int x; cin >> x; (vec).pb(x); maxv = max(maxv, x);}
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<long long> VLL;
typedef pair<int, int> ii;
typedef vector<vector<ii> > Graph;
typedef map<int,int> FREQ;

int m, k;
VI books;

bool check(int mid) {
    int parts = 0;
    for(int i = 0; i < m; i++) {
        
    }
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
    while(T > 0) {
        T--;
        cin >> m >> k;
        READALL(books);
    }

    int res = binary_search_simple(0, m);
}