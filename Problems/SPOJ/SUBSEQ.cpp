#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        vector<int> seq(1000010, 0);
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            cin >> seq[i];
        }
        int l = -1, r = -1;
        int ans = 0;
        int sum = 0;
        while (l < n && r < n) {
            r++;
            sum += seq[r];
            cerr << "sum is r " << sum << endl;
            
            if (abs(sum) == 47) {
                ans++;
                l++;
                sum -= seq[l];
                cerr << "sum is l1 " << sum << endl;
                cerr << "sub on " << l << ' ' << r << endl;
            }
            if (abs(sum) > 47) {
                l++;
                sum -= seq[l];
                cerr << "sum is l2 " << sum << endl;
            }
            if (abs(sum) == 47) {
                cerr << "sub on " << l << ' ' << r << endl;
                ans++;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
    
}
