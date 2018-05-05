#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main() {

    while(true) {
        int n, t;
        cin >> n >> t;
        if (n == 0 && t == 0)
            break;
        set<long> d;
        set<int> div;
        bool ns = 1;
        int lb = (int)1e9;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            lb = min(lb, x);
            if (t % x != 0)
                ns = 0;
            d.insert(x);
        }
        if (ns) {
        for(int i = 2; i*i <= t; i++)
            if (t % i == 0) {
                div.insert(i);
                }
        
        int ans = 100000;
        for(auto x : div)
            if (x < ans && d.count(x) == 0 && x > lb && t % x == 0)
                ans = min(ans, x);
        cout << ans << endl;
    }
    else {
        cout << "impossivel" << endl;
        continue;
    }
    }    
}
