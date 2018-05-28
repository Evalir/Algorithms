#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> hotels;
    vector<long long> PS;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        hotels.push_back(x);
    }
    int l = -1, r = -1;
    long long ans = 0;
    long long sum = 0;
    while (l < n && r < n) {
        if (r < n)
            r++;
        sum += hotels[r];
        if (sum <= m) {
            ans = max(ans, sum);
        }
        //cerr << "ans is r " << ans << endl;
        if (sum > m)
            while (sum> m) {
                l++;
                sum -= hotels[l];
                //cerr << "ans is l " << ans << endl;
            }
          if (sum <= m) {
            ans = max(ans, sum);
        }
    }
    
    cout << ans << endl;
    return 0;
    
}
