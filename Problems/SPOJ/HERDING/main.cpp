#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
using namespace std;

char gr[1010][1010];
int gp[1010][1010];
int P[1000009];
int R[1000009];
int FIND(int x){
    if(P[x] == -1)return x;
    return P[x] = FIND(P[x]);
}

int UNION(int x,int y){
    x = FIND(x);
    y = FIND(y);
    if(x == y) return false;
    if(R[x] > R[y]) P[y] = x;
    else P[x] = y;
    R[y] += (R[x] == R[y]);
    return true;
}

void ff(int r, int c, int &n, int &m) {
    if (r < 0 || r > n-1 || c < 0 || c > m-1)
        return;

}
int main() {
    int n,m;
    cin >> n >> m;
    memset(P,-1,sizeof(P));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            cin >> gr[i][j];
            gp[i][j] = i;
        }

    return 0;
}