#include <bits/stdc++.h>
using namespace std;

int cross_product(int ax, int ay, int bx, int by, int cx, int cy) {
    return (bx-ax)*(cy-ay) - (cx-ax)*(by-ay);
}

int lefton(int ax, int ay, int bx, int by, int cx, int cy) {
    return cross_product(ax, ay, bx, by, cx, cy) >= 0;
}

int n, d, m;
bool check(int x, int y) {
    return lefton(d, 0, n, n-d, x, y) &&
           lefton(n, n-d, n-d, n, x, y) &&
           lefton(n-d, n, 0, d, x, y) &&
           lefton(0, d, d, 0, x, y);
}

int main() {
    cin >> n >> d >> m;
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        if (check(x,y)) puts("YES");
        else puts("NO");
    }

    return 0;
}