#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
using namespace std;
bool mat[105][105];
bool nm[105][105];
bool u[105][105];
bool r[105], c[105];

int main() {
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> mat[i][j];
    memset(u,0, sizeof(u));
    memset(r, 0, sizeof(r));
    memset(c,0,sizeof(c));
    memset(nm,0,sizeof(c));
    for(int i = 0; i < n; i++) {
        bool ok = true;
        for(int j = 0; j < m; j++) {
            if (!mat[i][j]) {
                r[i] = 0;
                ok = false;
            }
        }
        if (ok) {
            r[i] = true;
        }
    }
    for(int i = 0; i < m; i++) {
        bool ok = true;
        for(int j = 0 ; j < n; j++) {
            if (!mat[j][i]) {
                ok = false;
                c[i] = false;
            }
        }
        if (ok) {
            c[i] = true;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (r[i] && c[j]) {
                for(int k = 0; k < m; k++) {
                    nm[i][k] = true;
                }
                for(int k = 0; k < n; k++) {
                    nm[k][j] = true;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            if (nm[i][j] != mat[i][j]) {
                cout << "NO" << endl;
                return 0;
            }
            else continue;
        }
    }
    cout << "YES" << endl;
    for(int i = 0; i < n; i++) {
        for(int j =0 ; j < m; j++) {
            if (r[i] && c[j])
                cout << 1 << ' ';
            else
                cout << 0 << ' ';
        }
        cout << endl;
    }
    return 0;
}