#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k;
    cin >> k;
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0) {
        int t = n % 10;
        ans += t;
        n/=10;
    }
    cout << ans << endl;
    return 0;
}
