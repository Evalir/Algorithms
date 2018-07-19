#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <climits>
#define joa ios_base::sync_with_stdio(false);
#define MOD 1000000007;
using namespace std;

using ll = long long;
using pll = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<long>;
using VB = vector<bool>;
using VVI = vector<VI>;

VVI g;
VB good;
VB used;
int cnt = 0;

void dfs(int u ) {
    good[u] = true;
    for(auto v : g[u])
        if (!good[v])
            dfs(v);
}

void dfsMark(int u) {
    ++cnt;
    used[u] = true;
    for(auto v : g[u])
        if (!good[v] && !used[v])
            dfs(v);
}

int main() {
    joa
    int n,m,s;
    cin >> n >> m >> s;
    g.resize(n);
    good.resize(n);
    used.resize(n);
    for(int i = 0; i < m; i++) {
        int x,y;
        cin >> x >> y;
        --x,--y;
        g[x].push_back(y);
    }
    --s;
    dfs(s);

    vector<pll> anw;
    for(int i = 0; i < n; i++) {
        if (!good[i]) {
            cnt = 0;
            used = {};
            used.resize(n);
            used.assign(n,0);
            dfsMark(i);
            anw.push_back({cnt,i});
        }
    }

    sort(anw.begin(),anw.end());
    reverse(anw.begin(), anw.end());
    int ans = 0;
    for(auto k : anw) {
        if (!good[k.second]) {
            ++ans;
            dfs(k.second);
        }
    }

    cout << ans << endl;

    return 0;
}