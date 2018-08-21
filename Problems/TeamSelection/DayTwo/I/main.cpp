#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;
int n, m, obs;
const int INF = 1 << 30;
int alienTime = INF;
int hTime = INF;

bool visa[510][510];
bool vish[510][510];
char gr[510][510];
void fa(int r, int c, int t) {
    if (r >= n || c >= m || r < 0 || c < 0)
        return;
    if (visa[r][c])
        return;
    if (gr[r][c] == 'x' || gr[r][c] == '?')
        return;
    visa[r][c] = true;
    //cout << "Aliens at " << r << ' ' << c << endl;
    if (r == n-1 && c == m-1) {
        alienTime = min(alienTime, t);
        return;
    }
    fa(r,c-1, t + 1);
    fa(r,c+1, t + 1);
    fa(r-1,c, t + 1);
    fa(r+1,c, t + 1);

}

void fb(int r, int c, int t) {
    if (r >= n || c >= m || r < 0 || c < 0)
        return;
    if (vish[r][c])
        return;
    if (gr[r][c] == 'x')
        return;
    vish[r][c] = true;
    //cout << "doom at " << r << ' ' << c << endl;
    if (r == n-1 && c == m-1) {
        hTime = min(hTime, t);
    }
    fb(r+1,c, t + 1);
    fb(r-1,c, t + 1);
    fb(r,c+1, t + 1);
    fb(r,c-1, t + 1);
}
int main() {
    cin >> n >> m >> obs;
    memset(visa,0,sizeof(visa));
    memset(vish,0,sizeof(vish));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> gr[i][j];
    vector<pair<int,int>> k;
    k.push_back({0,0});
    while(obs--) {
        int l, r;
        cin >> l >> r;
        gr[l][r] = '?';
        k.push_back({l,r});
    }
    fa(0,0,0);
    for(int i = 0; i < (int)k.size(); i++) {
        memset(vish,0,sizeof(vish));
        //cout << "starting from " << k[i].first << ' ' << k[i].second << endl;
        fb(k[i].first,k[i].second,5);
    }
    cout << " alien time " << alienTime << " h time " << hTime << endl;
    if (alienTime <= hTime) {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;

    return 0;
}