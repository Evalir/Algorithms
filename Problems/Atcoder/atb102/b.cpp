#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for(long long &i : v)
        cin >> i;
    long long ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            if (i != j) {
                ans = max(ans,abs(v[i]-v[j]));
            }
        }    
    cout << ans << endl;
    return 0;
}
