#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        long n;
        cin >> n;
        int ans = 0;
        while (n > 0) {
            ans += n % 10;
            n /= 10;
        }
        cout << ans << endl;
    }
    
    return 0;
    
}
