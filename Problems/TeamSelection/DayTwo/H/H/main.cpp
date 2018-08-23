#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> s(20010);
        int x;
        for(int i = 0 ; i < n; i++) {
            cin >> x;
            s[x] = max(s[x], s[x-1]+1);
        }
        int ans = *max_element(s.begin(),s.end());
        cout << ans << endl;
    }
    return 0;
}
