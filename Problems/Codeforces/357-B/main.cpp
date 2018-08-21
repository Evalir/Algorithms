#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> s(m);
    vector<int> anw(n+3,0);
    for(int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        s[i].push_back(x);
        s[i].push_back(y);
        s[i].push_back(z);
    }
//    for(int i = 0; i < m; i++) {
//        for (auto t : s[i])
//            cout << t << ' ';
//        cout << endl;
//    }
    for(int i = 0; i < m; i++) {
        vector<bool> ok(3,true);
        for(int j = 0; j < 3; j++)
            if (anw[s[i][j]]) ok[anw[s[i][j]]-1] = false;
        for(int j = 0; j < 3; j++) {
            if(!anw[s[i][j]])  {
                for(int k = 0; k < 3; k++) {
                    if(ok[k]) {
                        ok[k] = false;
                        anw[s[i][j]] = k + 1;
                        break;
                    }
                }
            }

        }

    }
    for(int i = 1; i <= n; i++)
        cout << anw[i] << ' ';
    return 0;
}