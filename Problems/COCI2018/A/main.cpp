#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    int k,n;
    scanf("%d%d", &k, &n);
    Long am = 1;
    for(int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << k << endl;
            return 0;
        } else {
            cout << am << endl;
            k -= am;
            am++;
        }
    }
    return 0;
}