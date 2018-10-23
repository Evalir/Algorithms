#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sum += x;
        }
        if (sum + 1500LL == k) {
            cout << "Correct" << endl;
        }
        else cout << "Bug" << endl;
    }
    return 0;
}