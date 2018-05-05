<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<unsigned long long> el(n);
    for(int i = 0; i < n; i++)
        cin >> el[i];
    
    unsigned long long ans = 0;
    unsigned long long lvl = 0;
    
    for(int i = 0; i < n; i++) {
        if (i == 0)
            continue;
        
        if ((el[i-1]+lvl) > (el[i] + lvl)) {
            ans += (el[i-1]+lvl)-(el[i]+lvl);
            lvl += (el[i-1]+lvl)-(el[i]+lvl);
        }
    }
    
    cout << ans << endl;
=======
#include <bits/stdc++.h>
using namespace std;

#define INF 1e9+7
#define EPS -1e9-7

int main() {
    int n;
    cin >> n;
    vector<long long> el;
    unsigned long long ans = 0;
    long long maxv = EPS, minv = INF;
    bool isEnd = false;
    bool isSorted = true;
    long long MAXVAL = EPS;
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        el.push_back(x);
        MAXVAL = max(MAXVAL, x);
    }
    
    for(int i = 0; i < n; i++) {
        if (i != n-1)
            if (el[i+1] < el[i]) {
                isSorted = false;
                //cerr << el[i+1] << " < " << el[i] << endl;
            }
        if (MAXVAL != el[n-1]) {
            maxv = max(maxv, el[i]);
            minv = min(minv, el[i]);
        }
        else if (i != n-1) {
            maxv = max(maxv, el[i]);
            minv = min(minv, el[i]);
        }
    }
    if (isSorted)
        cout << 0 << endl;
    else
        cout << maxv - minv << endl;
>>>>>>> c4b2c1df75e805ef9d4b7f8c436eaf1431a0eec0
    return 0;
}
