#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ull = unsigned long long;

int main() {
    ull n;
    cin >> n;
    ull ans = n*(n+1)/2LL;
    ans -= (n-1);
    cout << ans << endl;
    return 0;
}