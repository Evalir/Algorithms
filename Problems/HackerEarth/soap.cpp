#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, q, z;
vector<int> el;

bool check(int mid) {
    if (el[mid] >= z) return true;
    else return false;
}

int binary_search_simple(int lo, int hi) {
   int res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      bool chk = check(mid);
      cerr << "lo: " << lo << "  hi: " << hi << "  mid: " << mid << "  chk: " << chk << endl;
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
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }
    sort(el.begin(), el.end());
    
    cin >> q;
    while (q--) {
        cin >> z;
        int ans = binary_search_simple(0, z);
        cout << ans << endl;
    }
    return 0;
}