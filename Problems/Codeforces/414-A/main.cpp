#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> V;
    int r = n / 2;
    if (r > k || (r == 0 && k)) {
        cout << -1 << endl;
        return 0;
    }
    int cnt = 2*k + 1;
    for(int i = 0; i < r; i++) {
        if (i != r-1) {
            V.push_back(cnt);
            V.push_back(cnt + 1);
            cnt += 2;
            k--;
        } else {
            V.push_back(k);
            V.push_back(2*k);
        }
    }
    if (n % 2) V.push_back(cnt+1);
    for(auto i : V) cout << i << ' ';
    puts("");
    return 0;
}