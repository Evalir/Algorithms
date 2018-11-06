#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;
using Long = long long;
using pii = pair<Long,Long>;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<Long> x(n + m), t(n + m), bestDist(n + m, (1LL << 40LL)), aPos(n + m, -1), anw(n + m, 0);
    for(auto &y : x) cin >> y;
    for(auto &y : t) cin >> y;
    stack<pii> st;
    for(int i = 0; i < n + m; i++) {
        if (t[i] == 0) st.push({x[i],i});
        if (t[i] == 1) {
            while(!st.empty()) {
                Long personCoord = st.top().first;
                Long personPos = st.top().second;
                if (abs(x[i]-personCoord) < abs(bestDist[personPos])) {
                    bestDist[personPos] = abs(x[i]-personCoord);
                    if (aPos[personPos] != -1) { //if assigned previously
                        anw[aPos[personPos]]--; //modify prev answer
                    }
                    aPos[personPos] = i; //change personAssigned
                    anw[i]++;
                }
                st.pop();
            }
        }
    }
    while(!st.empty()) st.pop();
    for(int i = (n + m) - 1; i >= 0; i--) {
        if (t[i] == 0) st.push({x[i],i});
        if (t[i] == 1) {
            while(!st.empty()) {
                Long personCoord = st.top().first;
                Long personPos = st.top().second;
                if (abs(x[i]-personCoord) <= abs(bestDist[personPos])) {
                    bestDist[personPos] = abs(x[i]-personCoord);
                    if (aPos[personPos] != -1) { //if assigned previously
                        anw[aPos[personPos]]--; //modify prev answer
                    }
                    aPos[personPos] = i; //change personAssigned
                    anw[i]++;
                }
                st.pop();
            }
        }
    }
    for(int i = 0; i < n + m; i++) {
        if (t[i]) cout << anw[i] << ' ';
    }
    return 0;
}