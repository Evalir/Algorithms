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
    return 0;
}