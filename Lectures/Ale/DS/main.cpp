#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    char matrix[n+10][n+10];
    //iterar filas
    for(int i = 0; i <= n+2; i++) {
        //iterar columnas
        for(int j = 0; j <= n+2; j++) {
            matrix[i][j] = '?';
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> matrix[i][j];
        }
    }
    int ans[n+10][n+10];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            ans[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if (matrix[i][j] == '.') {
                if (matrix[i-1][j] == '*') {
                    ans[i-1][j] = -1;
                    ans[i][j]++;
                }
                if (matrix[i+1][j] == '*') {
                    ans[i+1][j] = -1;
                    ans[i][j]++;
                }
                if (matrix[i][j-1] == '*') {
                    ans[i][j-1] = -1;
                    ans[i][j]++;
                }
                if (matrix[i][j+1] == '*') {
                    ans[i][j+1] = -1;
                    ans[i][j]++;
                }
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }


    return 0;
}
