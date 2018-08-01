#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int& t : s) cin >> t;
    pair<int,int> minv = {1e9,1e9};
    pair<int,int> mv = {1e9,1e9};
    map<int,int> f;
    for(int i = 0; i < n; i++) {
        if (s[i] < minv.first) minv = {s[i],i};
        if (s[i] <= mv.first) mv = {s[i],i}, f[s[i]]++;
    }
    int cnt = 0;
    for(int i = minv.second; i < minv.second+(n); i++) {
        if (s[i%n] > s[(i+1)%n]) {
            cnt++;
        }
        if (cnt >= 2) {puts("-1"); return 0;}
    }
    int ans = minv.second == 0 ? 0 : n-minv.second;
    if (cnt > 0 && f[s[0]] > 1)
        ans = n-mv.second;
    cout << ans << endl;
    return 0;
}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <map>
//#include <set>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> s(n);
//    for(int& t : s) cin >> t;
//    pair<int,int> minv = {-1,-1};
//    pair<int,int> pp = {1e9,1e9};
//    for(int i = 0; i < n; i++) {
//        if (s[i] > minv.first) minv = {s[i],i};
//        if (s[i] < pp.first) pp = {s[i],i};
//    }
//    for(int i = 0; i < minv.second; i++) {
//        if (s[i%n] > s[(i+1)%n]) {
//            puts("-1");
//            return 0;
//        }
//    }
//    for(int i = minv.second+1 ; i < n; i++) {
//        if (s[i%n] > s[(i+1)%n]) {
//            puts("-1");
//            return 0;
//        }
//    }
//    int ans = pp.second == 0 ? 0 : n-pp.second;
//    cout << ans << endl;
//    return 0;
//}