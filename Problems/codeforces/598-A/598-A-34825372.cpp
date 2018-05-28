#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<long long> el;

bool isPowerOfTwo (int x) {
    for(auto dx : el) {
        if (dx == x) {
            return true;
        }
  }
    return false;
}
 
int main() {
    int T;
    cin >> T;
    vector<long long> pot;
    int tp = 2;
    el.insert(0);
    el.insert(1);
    el.insert(2);
    el.insert(4);

    for(int i = 1; i <= 28; i++) {
        el.insert(tp << i);
    }
    
    while(T--) {
        long long x;
        cin >> x;
        long long ans = (x*(x+1))/2;
        long long acc = 0;
        
        for(auto dx : el) {
            if (dx <= x) acc += dx;
            else continue;
        }
        ans -= acc*2;
        cout << ans << endl;
    }

    return 0;
}