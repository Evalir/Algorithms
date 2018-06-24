#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <climits>
using namespace std;
using ll = long long;
ll k;
bool check(ll a) {
  ll ck = k;
  ll cva = 0, pet = 0;
  while(ck > 0) {
    if (cva > 0 && a > ck) {
      cva += ck;
      ck = 0;
      break;
    }
    cva += a;
    ck -= a;
    ll tpc = (ck/10);
    ck -= tpc;
    pet += tpc;
  }
    if (2*cva >= k)
      return true;
    else
      return false;
}

ll binary_search_simple(ll lo, ll hi) {
   ll res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      ll mid = ((lo + (hi - lo) / 2));
      bool chk = check(mid);
      if (chk) {
        hi = mid - 1; 
        res = mid;     // if searching for last NO, move this line to else case  
      } else {
         lo = mid + 1;
      }
   }
   return res;
}

int main() {
  cin >> k;
  ll ans = binary_search_simple(1LL,k);
  cout << ans << endl;
  return 0;

}
