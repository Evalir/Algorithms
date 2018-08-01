#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int n, m;
char gr[60][60];
int dis[60][60];
int ans = 0;
void ff(int r, int c, int lr, int lc) {
    if (r > n || c > m || r <= 0 || c <= 0)
        return;

    ans = max(ans, dis[r][c]);

    if ((r != lr || c != lc) && gr[r-1][c]-gr[r][c] <= 1) {
        dis[r-1][c] = dis[r][c] + 1;
        cout << "up" << endl;
        ff(r-1,c, r, c);
    }
    else if ( (r != lr || c != lc) && abs(gr[r+1][c]-gr[r][c]) <= 1) {
        dis[r+1][c] = dis[r][c] + 1;
        cout << "down" << endl;
        ff(r-1,c, r, c);
    }
    else if ((r != lr || c != lc) && abs(gr[r][c+1]-gr[r][c]) <= 1) {
        dis[r][c+1] = dis[r][c] + 1;
        cout << "r" << endl;
        ff(r,c+1, r, c);
    }
    else if ((r != lr || c != lc) && abs(gr[r][c-1]-gr[r][c]) <= 1) {
        dis[r][c-1] = dis[r][c] + 1;
        cout << "l" << endl;
        ff(r,c-1, r, c);
    }
    else if ((r != lr || c != lc) && abs(gr[r+1][c+1]-gr[r][c]) <= 1) {
        dis[r+1][c+1] = dis[r][c] + 1;
        cout << "dr" << endl;
        ff(r+1,c+1, r, c);
    }
    else if ((r != lr || c != lc) && abs(gr[r-1][c-1]-gr[r][c]) <= 1) {
        dis[r-1][c-1] = dis[r][c] + 1;
        cout << "ul" << endl;
        ff(r-1,c-1, r, c);
    }
    else if ((r != lr || c != lc) && abs(gr[r+1][c-1]-gr[r][c]) <= 1) {
        dis[r+1][c-1] = dis[r][c] + 1;
        cout << "dl" << endl;
        ff(r+1,c-1, r, c);
    }
    else if ((r != lr || c != lc) && abs(gr[r-1][c+1]-gr[r][c]) <= 1) {
        dis[r-1][c+1] = dis[r][c] + 1;
        cout << "ur" << endl;
        ff(r-1,c+1, r, c);
    }
    else {
        return;
    }
}

int main() {
    cin >> n >> m;
    memset(dis,0,sizeof(dis));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> gr[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if (gr[i][j] == 'A') {
                ff(i,j, i, j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}