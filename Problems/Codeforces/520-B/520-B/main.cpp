#include <bits/stdc++.h>
using namespace std;
int n, m;
const int INF = 1 << 30;
int main() {
    cin >> n >> m;
    vector<int> d((int)1e5 + 10, INF);
    queue<int> Q;
    d[n] = 0;
    Q.push(n);
    int node, ans;
    while(!Q.empty()) {
        node = Q.front(); Q.pop();
        if (node * 2 <= (int)1e5) {
            if (d[node*2] == INF) {
                d[node*2] = d[node] + 1;
                Q.push(node * 2);
            }
        }
        if (node - 1 > 0) {
            if (d[node - 1] == INF) {
                d[node - 1] = d[node] + 1;
                Q.push(node - 1);
            }
        }
        if (node == m) ans = d[node];
    }
    cout << ans << endl;
    return 0;
}
