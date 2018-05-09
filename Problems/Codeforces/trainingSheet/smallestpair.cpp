#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
       int n;
       cin >> n;
       vector<long long> arr(n,0);
       for(int i = 0; i < n; i++)
            cin >> arr[i];
        
        long long ans = (int)1e9;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if (i < j) {
                    if (arr[i] + arr[j] < ans) {
                        ans = arr[i] + arr[j];
                    }
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
