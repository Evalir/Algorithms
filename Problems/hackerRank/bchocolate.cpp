#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> el(n, 0);
    int m, d;
    for(int i = 0; i < n; i++) { cin >> el[i];}
    cin >> m >> d;
    
    int res = 0;
    
    int l = 0;
    int r = 0;
    int nc = 1;
    int nsu = 0;
    while (l < n) {
        while (r < n && nc <= m) {
            r++;
            nc++;
            nsu = el[l] + el[r];
            cout << l << ' ' << r << " SUM IS " << nsu << endl;
        }
        if (d == nsu && nc == m) res++;
        
        while (l < r) {
            l++;
            nc--;
            nsu = el[l] + el[r];
        }

    }
    
    cout << res << endl;
    
    return 0;
}
