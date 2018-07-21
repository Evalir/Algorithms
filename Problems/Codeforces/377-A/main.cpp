#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string.h>

using namespace std;

int vis[510][510];
char g[510][510];
int z = 0;
int n,m,k,s = 0;
bool ok = true;
void ff(int r, int c) {
    if (r < 0 || r >= n || c < 0 || c >= m || vis[r][c])
        return;
    if (g[r][c] == '#')
        return;
    if (z == s-k) {
        ok = false;
        return;
    }
    vis[r][c] = true;
    ++z;
    if (ok) {
        ff(r - 1, c);
        ff(r + 1, c);
        ff(r, c - 1);
        ff(r, c + 1);
    }
}

int main() {
    cin >> n >> m >> k;
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            cin >> g[i][j];
            if (g[i][j] == '.') ++s;
            if (g[i][j] == '#') vis[i][j]= 2;
        }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if (!vis[i][j])
                ff(i,j);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vis[i][j] == 2) cout << '#';
            if (vis[i][j] == 1) cout << '.';
            if (vis[i][j] == 0) cout << 'X';
        }

        cout << endl;
    }

    return 0;
}