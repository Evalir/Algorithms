#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int hf;
    n % 2 == 0 ? hf = n/2 : hf = (n+1) / 2;
    if (n <= 2) {
        cout << "No" << endl;
        return 0;
    }
    else {
        cout << "Yes" << endl;
        cout << "1 " << hf << endl;
        cout << n-1 << ' ';
        for(int i = 1; i <= n; i++) {
            if (i != hf) cout << i << ' ';
        }
        puts("");
    }
    return 0;
}