#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mi = min(1,n);
    int ma = max(1,n);
    int ans = 0;
    for(int i = mi; i <= ma; i++) {
        ans += i;
    }
    
    cout << ans << endl;
    return 0;
}
