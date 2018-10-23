#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int main() {
    int n;
    scanf("%d", &n);
    vector<int> dg(9);
    for(int i = 0; i < 9; i++) scanf("%d", &dg[i]);
    string ans;
    pii curr = {-1, 0};
    for(int i = 0 ; i < 9; i++) {
        if (n / dg[i] > curr.second && n / dg[i] > 0) {
            curr.first = i + 1;
            curr.second = n / dg[i];
        }
    }
    if (curr.first == -1) {
        puts("-1");
        return 0;
    }
    for(int i = 0; i < curr.second; i++)
        ans += (char)curr.first + '0', n -= dg[curr.first-1];
    for(auto &t : ans) {
        for (int i = 8; i >= t-'0'; i--) {
            int curf = n + dg[t-1-'0'];
            curf -= dg[i];
            if (curf >= 0) {
                n += dg[t-1-'0'];
                n -= dg[i];
                t = (i+1) + '0';
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}