#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int totalToasts = (k*l)/nl;
    //cerr << totalToasts << " <- is " << endl;
    if (totalToasts == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    if (totalToasts < nl) {
        cout << 0 << endl;
        return 0;
    }
    
    int totalSlice = c*d;
    //cerr << totalSlice << " <- is lemon " << endl;
    if (totalSlice < n) {
        cout << 0 << endl;
        return 0;
    }
    
    int totalSalt = p / np;
    //cerr << totalSalt << " <- is salt" << endl;
    int ans = min(totalToasts, totalSlice);
    ans = min(ans, totalSalt)/n;
    cout << ans << endl;
    
    return 0;
    
    // 1 4 5 5 3 10 3 1
    
}