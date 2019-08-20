#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int n;
bool dp(int i, int sum) {
    if (i == n) {
        return sum % 360 == 0;
    }
    return dp(i + 1, sum + (a[i] % 360)) || dp(i + 1, sum - (a[i] % 360));
}

int main() {
    cin >> n;
    a = vector<int>(n);
    for(auto &t : a) cin >> t;
    dp(0,0) ? puts("YES") : puts("NO");
    return 0;
}
