#include <bits/stdc++.h>
using namespace std;
char gr[200][200];

int main() {
    int n, m;
    cin >> n >> m;
    memset(gr,'W', sizeof(gr));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> gr[i][j];
    int len = 0;
    bool ok = false;
    bool fi = false;
    int x, y;
    x = y = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (gr[i][j] == 'B' && !ok && !fi) {
                //cerr << "found at " << i << ' ' << j << endl;
                ok = true;
                x = i + 1;
                y = j + 1;
                len++;
            }
            else if (gr[i][j] == 'B' && ok && !fi) {
                len++;
            }
            if (j == m-1 && ok) {
                ok = false;
                fi = true;
            }
        }
    }
    cout << x + (len/2) << ' ' << y + (len/2) << endl;
    return 0;
}