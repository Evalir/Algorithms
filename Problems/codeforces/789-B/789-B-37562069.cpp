#include <iostream>
#include <set>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    long long b1, q, l , m;
    cin >> b1 >> q >> l >> m;
    vector<long long> bi(m, 0);
    for(int i = 0; i < m; i++)
        cin >> bi[i];
    set<long long> nums;
    long long lastnum = b1;
    if (abs(b1) > l) {
        cout << 0 << endl;
        return 0;
    }
    
    for(int i = 0; i < 40; i++) {
        if (i == 0 && abs(b1) <= l) {
            //cerr << "inserting" << b1 << endl;
                nums.insert(b1);
        }
        else
            if (abs(lastnum) <= l) {
                //cerr << "inserting " << lastnum << endl;
                nums.insert(lastnum);
            }
        if (lastnum * q <= l && lastnum < (long long)1e9 && q < (long long)1e9)
            lastnum = lastnum * q;
    }
    int ans = nums.size();
    cerr << "ans b is " << ans << endl;
    
    for(int i = 0; i < m; i++) {
        if (nums.count(bi[i]) > 0) {
            ans--;
        }
    }
    
    if (b1 == 0 && ans > 0) {
        cout << "inf" << endl;
        return 0;
    }
    if (q == 1 && ans > 0) {
        cout << "inf" << endl;
        return 0;
    }
    if (q == -1 && ans > 0) {
        cout << "inf" << endl;
        return 0;
    }
    bool f0 = 0, fb1 = 0;
    if (q == 0) {
        for(int i = 0; i < m; i++) {
            if (bi[i] == q) {
                cerr << "found 0 " << endl;
                f0 = 1;
            }
            if (bi[i] == b1)
                fb1 = 1;
        }
        if (!f0) {
            cout << "inf" << endl;
            return 0;
        }
        
    }
    
    
    cout << ans << endl;
}