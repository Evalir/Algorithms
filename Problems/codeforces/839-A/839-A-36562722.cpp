#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n , k, d = 0;
    cin >> n >> k;
    int t = 0; //n of candies
    vector<int> candies(n);
    
    for(int i = 0; i < n; i++) {
        cin >> candies[i];
    }
    
    for(int i = 0; i < n; i++) {
        d++;
        t += candies[i];
        k -= min(8, t);
        if (min(8,t) == t)
            t = 0;
        else
            t -= 8;
            
        if (k <= 0) {
            cout << d << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
    
    
}