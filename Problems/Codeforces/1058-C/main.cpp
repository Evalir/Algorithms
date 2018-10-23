#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string S;
    cin >> n >> S;
    int sum = 0;
    for(auto t : S) sum += t-'0';
    for(int i = 2; i <= n; i++) {
        if (sum % i == 0) {
            int x = sum / i;
            int cnt = 0, pf = 0;
            for(int j = 0; j < n; j++) {
                cnt += S[j] - '0';
                if (cnt == x) cnt = 0, pf++;
            }
            if (pf == i) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}