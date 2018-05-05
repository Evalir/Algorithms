#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> stones(n,0);
    for(int i = 0; i < n; i++)
        cin >> stones[i];
    sort(stones.begin(), stones.end());
    int ans = 10000000;
    for(int i = 0; i < n-1; i++) {
        int bsum = stones[stones.size()-1] + stones[i];
        int lsum = 0;
        for(int j = 0; j < n-1; j++) {
            if (i != j) {
                lsum += stones[j];
            }
        }
        ans = min(ans, abs(bsum-lsum));
    }
    cout << ans << endl;
    return 0;
}
