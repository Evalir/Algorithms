#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;
vector<long> stalls;
int N, C; //n of stalls, n of cows
//bserach and tersearch requires check function
bool check(int dist) {
    int ncows = C;
    int lastS = -1;
    for(int i = 0; i < stalls.size(); i++) {
        if (i == 0) { 
            ncows--;
            lastS = stalls[i];
        }
        else if (abs(stalls[i]-lastS) >= dist) {
            ncows--;
            lastS = stalls[i];
        }
        if (ncows <= 0)
            return true;
        else
            continue;
    }
    
    if (ncows > 0)
        return false;
    else
        return true;
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

int main() {
    int T;
    cin >> T;
    while(T--) {
        cin >> N >> C;
        stalls.clear();
        for(int i = 0; i < N; i++) {
            int x;
            cin >> x;
            stalls.push_back(x);
        }
        
        sort(stalls.begin(), stalls.end());
        int ans;
        ans = binary_search_simple(0, stalls[N-1]);
        
        cout << ans << endl;
        
    }
    
    return 0;
    
}
