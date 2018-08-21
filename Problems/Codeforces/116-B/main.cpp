#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string.h>
using namespace std;

char g[15][15];

int main() {
    memset(g, '?', sizeof(g));
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> g[i][j];
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (g[i][j] == 'W') {
                if (g[i - 1][j] == 'P') {
                    ++ans;
                    g[i - 1][j] = '.';
                    continue;
                } else if (g[i + 1][j] == 'P') {
                    ++ans;
                    g[i + 1][j] = '.';
                    continue;
                } else if (g[i][j - 1] == 'P') {
                    ++ans;
                    g[i][j - 1] = '.';
                    continue;
                } else if (g[i][j + 1] == 'P') {
                    ++ans;
                    g[i][j + 1] = '.';
                    continue;
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}