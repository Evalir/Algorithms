#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using pii = pair<int,Long>;
Long C[1010], F[1010];
vector<vector<int>> G(1010);
bool comp1(pii a, pii b) {return C[a.first] < C[b.first];}
int main() {
    memset(C,0,sizeof(C));
    memset(F,0,sizeof(F));
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> C[i];
    for(int i = 0; i < m; i++) {
        int x,y;
        cin >> x >> y;
        x--,y--;
        F[y] += C[x];
        F[x] += C[y];
        G[x].push_back(y);
        G[y].push_back(x);
    }
    vector<pii> CC;
    for(int i = 0; i < n; i++) {
        CC.push_back({i, F[i]});
    }
    sort(CC.begin(), CC.end(), comp1);
    Long ans = 0;
    for(int i = n-1; i>= 0; i--) {
        ans += F[CC[i].first];
        for(auto &u : G[CC[i].first]) F[u] -= C[CC[i].first];
        C[CC[i].first] = 0;
    }
    cout << ans << endl;
    return 0;
}