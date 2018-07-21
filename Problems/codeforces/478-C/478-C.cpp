#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k[5];
    cin >> k[0] >> k[1] >> k[2];
    sort(k, k + 3);
    cout << min(k[0]+k[1], (k[0]+k[1]+k[2])/3);
    return 0;
}