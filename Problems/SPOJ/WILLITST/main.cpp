#include <iostream>
using namespace std;
using ll = unsigned long long;
int main() {
    ll n;
    cin >> n;
    if ((n & (n - 1)) == 0) cout << "TAK" << "\n";
    else cout <<"NIE\n";
    return 0;
}