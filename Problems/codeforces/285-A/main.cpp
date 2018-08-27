#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (k == 0) {
        for(int i = 1; i <= n; i++)
                cout << i << ' ';
    }
    else if (n == k + 1) {
        for(int i = n; i > 0; i--) {
            cout << i << " ";
        }
    }
    else {
        for(int i = n; i> n-k; i--)
            cout << i << ' ';
        for(int i = 1; i <= n-k; i++)
            cout << i << ' ';
    }
    return 0;
}