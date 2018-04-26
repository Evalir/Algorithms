#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x;
    }

    for(int i = sum+1; i <= sum+5; i++) {
        if (i % (n+1) != 1) {
            ans++;
        }
        cerr << i % (n+1) << " for " << i  << endl;
    }
    
    cout << ans << endl;
    return 0;
    
    
    
}
