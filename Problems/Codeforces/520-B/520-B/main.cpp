#include <bits/stdc++.h>
using namespace std;
int n, m;

int main() {
    cin >> n >> m;
    int cnt = 0;
    while(n < m) {
        n *= 2;
        cnt++;
    }
    cnt += abs(n-m);
    
    cout << cnt << endl;
    return 0;
}
