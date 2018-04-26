#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> g(n,0);
    for(int i = 0; i < n; i++)
        cin >> g[i];
        
    sort(g.begin(), g.end());
    
    int ans = 0;
    for(int i = 0; i < (n/2)+1; i++) {
        ans += (g[i]/2)+1;
    }
    
    cout << ans << endl;
    
    return 0;
}
