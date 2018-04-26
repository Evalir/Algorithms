#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    while(true) {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        vector<long> dh(n),kh(m);
        for(int i = 0; i <n ; i++)
            cin >> dh[i];
        for(int i = 0; i < m; i++)
            cin >> kh[i];
        sort(dh.begin(), dh.end());
        sort(kh.begin(), kh.end());
        int d = 0,k = 0, ans = 0;
        while(d < n && k < m) {
            while (dh[d] > kh[k] && k < m)
                k++;
            if (k == m)
                break;
            ans += kh[k];
            d++,k++;
        }
        
        if (d == n)
            cout << ans << endl;
        else
            cout << "Loowater is doomed!" << endl;
    }    
    
    return 0;
}
