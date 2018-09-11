#include <bits/stdc++.h>
using namespace std;

struct NearestSet {
    set<int> s;
    void insert(int pos) {
        s.insert(pos);
    }
    int nearestElement(int pos) {
        auto k = s.lower_bound(pos);
        int best = -1;
        if (k != s.end()) {
            best = *k;
        }
        if (k != s.begin()) {
            k--;
            if (best == -1 || abs(pos - *k) <= abs(pos - best)) {
                best = *k;
            }
        }
        return best;
    }
};

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    NearestSet pos;
    int ans = 0;
    for(int i = 0; i < n; i++)
        if (s[i] == '1' && t[i] == '0') pos.insert(i);
    for(int i = 0; i < n; i++) {
        if (t[i] == '1' && s[i] == '0') {
            if (!pos.s.empty()) {
                int j = (pos.nearestElement(i));
                if (abs(i-j) < 2) {
                    s[i] = '1';
                    s[j] = '0';
                    pos.s.erase(j);
                    ans++;
                } else {
                    s[i] = '1';
                    ans++;
                }
            } else {
                s[i] = '1';
                ans++;
            }
        }
    }
    ans += pos.s.size();
    cout << ans << endl;
    return 0;
}
/*
 s- > 1010
      0101

 * */