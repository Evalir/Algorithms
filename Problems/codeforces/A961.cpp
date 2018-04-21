#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> col(n);
    vector<bool> hasSquare(n);
    int ans = 0;
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        x--;
        col[x]++;
        hasSquare[x] = true;
        bool eq = true;
        for(int j = 0; j < n; j++) {
            if (hasSquare[j] == false)
                eq = false;
        }
        if (eq) {
            //cerr << "at i " << i << " is eq" << endl;
            for(int j = 0; j < n; j++) {
                col[j]--;
                if (col[j] == 0)
                    hasSquare[j] = false;
            }
            ans++;
        }
    }
    
    
    cout << ans << endl;
    return 0;


}
