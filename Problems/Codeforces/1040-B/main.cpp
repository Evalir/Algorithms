#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    int n, k;
    cin >> n >> k;
    vector<int> f(n, 0);
    vector<vector<int>> ans(n);
    int state;
    int anw = 0, ank = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        f = vector<int> (n, 0);
        ank = 0;
        bool found = false;
        for(int j = i; j < n; j++) {
            bool good = true;
            if (j == i) {
                for(int z = max(0, j-k); z <= min(n, (j + k)); z++) {
                    if (z == n) break;
                    if(f[z]) {
                        good = false;
                        break;
                    }
                    else {
                        f[z] = !f[z];
                    }
                }
                if (good) {
                    ank++;
                    ans[i].push_back(j + 1);
                }

            }
            else if (cnt != k) cnt++;
            else if (cnt == k) {
                for(int z = max(0, j-k); z <= min(n, (j + k)); z++) {
                    if (z == n) break;
                    if(f[z]) {
                        good = false;
                        break;
                    }
                    else {
                        f[z] = !f[z];
                    }
                }
                if (good) {
                    ank++;
                    ans[i].push_back(j + 1);
                }
            }
            bool check = true;
            for(int z = 0; z < n; z++) {
                if (!f[z]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                found = true;
                anw = ank;
                state = i;
            }
            if (found) break;
        }
        if (found) break;
    }
    cout << anw << endl;
    for(auto i : ans[state]) cout << i << ' ';
    return 0;
}