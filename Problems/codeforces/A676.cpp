#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];
    int bigpos = 0 , lowpos = 100000000;
    int bign = 0, lown = 10000000;
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] > bign) {
            bign = nums[i];
            bigpos = i;
        }
        if (nums[i] < lown) {
            lown = nums[i];
            lowpos = i;
        }
    }
    
    int ans;
    ans = max(max(abs(bigpos-0), abs(bigpos-(n-1))), max(abs(lowpos-0), abs(lowpos-n-1)));
    cout << ans << endl;
    return 0;
}
