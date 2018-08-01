#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
using namespace std;

char gr[1010][1010];
bool u[1010][1010];
int gp[1010][1010];
set<int> ans;
struct DisjointSet
{
    vector<int> P; // if < 0 then negative size, else parentId
    DisjointSet(int N) : P(N, -1) {}
    int find(int x) {
        return P[x] < 0 ? x : (P[x] = find(P[x]));
    }
    bool join(int x,int y) {
        if((x = find(x)) == (y = find(y))) return false;
        if(P[y] < P[x]) swap(x,y);
        P[x] += P[y];
        P[y] = x;
        return true;
    }
};

void ff(int r, int c, int lr, int lc, int &n, int &m, DisjointSet &S) {
    if (r < 0 || r >= n || c < 0 || c >= m)
        return;
    S.join(gp[r][c], gp[lr][lc]);
    //cerr << r << ' ' << c << " klk " << S.find(gp[r][c]) << endl;
    if (u[r][c])
        return;
    u[r][c] = true;
    if (gr[r][c] == 'N')
        ff(r-1,c,r,c,n,m, S);
    if (gr[r][c] == 'S')
        ff(r+1,c,r,c,n,m, S);
    if (gr[r][c] == 'E')
        ff(r,c+1,r,c,n,m, S);
    if (gr[r][c] == 'W')
        ff(r,c-1,r,c,n,m, S);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    int cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            cin >> gr[i][j];
            gp[i][j] = cnt;
            cnt++;
        }

    DisjointSet S(n*m);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if (!u[i][j]) {
                ff(i, j, i, j, n, m, S);
            }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            int a = S.find(gp[i][j]);
            ans.insert(a);
        }

    cout << ans.size() << endl;

    return 0;
}