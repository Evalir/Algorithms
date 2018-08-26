#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> g[(int)1e3+10];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        --x,--y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int fp = 0;
    for(int i = 0; i < n; i++) {
        if (g[i].size() == 0) {
            fp = i;
            break;
        }
    }
    printf("%d\n", n-1);
    for(int i = 0; i < n; i++) {
        if (i != fp) {
            printf("%d %d\n", i+1, fp+1);
        }
    }
    return 0;
}