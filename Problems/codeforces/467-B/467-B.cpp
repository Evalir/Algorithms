#include <bits/stdc++.h>
using namespace std;
//klk joa
int main() {
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> V(m);
    for(int& i : V)
        cin >> i;
    int fe;
    cin >> fe;
    bitset<20> f(fe);
    int ans = 0;
    for(int& i : V) {
        bitset<20> b(i);
        int cnt = 0;
        for(int j = 0; j < 20; j++) {
            if (b[j] != f[j])
                cnt++;
        }
        if (cnt > k)
            continue;
        else
            ++ans;
    }
    cout << ans << endl;
    return 0;
}