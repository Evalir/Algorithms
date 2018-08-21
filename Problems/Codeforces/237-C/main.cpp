#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <queue>
using namespace std;
set<int> SievePrimes(int n) {

    bool prime[n+1];
    set<int> primes;
    memset(prime, true, sizeof(prime));

    for(int p = 2; p*p <= n; p++) {
        if (prime[p] == true) {
            for(int i= p*2; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    for(int i = 2; i < n; i++) {
        if (prime[i] == true) {
            primes.insert(i);
        }
    }

    return primes;
}
set<int> pr;
int x,b,k;
bool chk(int l) {
    int cnt = 0;
    for(int i = x; i <= b-l+1; i++) {
        if (pr.count(i))
            cnt++;
    }
    cerr << cnt << endl;
    if (cnt >= k)
        return true;
    return false;
}

int bs(int lo, int hi) {
    int res = - 1;
    while(lo <= hi) {
        int mid = lo + (hi-lo)/2;
        cerr << "lo " << lo << ' ' << " hi " << hi << " mid " << mid << endl;
        if (chk(mid)) {
            cerr << "ok" << endl;
            lo = mid + 1;
            res = mid;
        }
        else {
            cerr << "not ok" << endl;
            hi = mid - 1;
        }
    }
    return res;
}
int main() {
    cin >> x >> b >> k;
    pr = SievePrimes(1e6+10);
    cout << bs(0, b) << endl;
    return 0;
}