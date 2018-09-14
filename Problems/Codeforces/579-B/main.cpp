#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans(2*n+1, 0);
    vector<bool> ht(1010);
    vector<vector<int>> st(1010, vector<int>(1010,-1));
    for(int i = 2; i <= (2*n); i++) {
        for(int j = 1; j < i; j++) {
            cin >> st[i][j];
        }
    }
    priority_queue<pair<int,pair<int,int>>> PQ;
    for(int i = 2; i <= (2*n); i++) {
        for(int j = 1; j < i; j++) {
            PQ.push({st[i][j], {i,j}});
        }
    }
    while(n > 0) {
        //cerr << "ok" << endl;
        if (!ht[PQ.top().second.first] && !ht[PQ.top().second.second]) {
            ans[PQ.top().second.first] = PQ.top().second.second;
            ans[PQ.top().second.second] = PQ.top().second.first;
            //cout << ans[PQ.top().second.first] << " in " << endl;
            //cout << ans[PQ.top().second.second] << " in " << endl;
            ht[PQ.top().second.first] = true;
            ht[PQ.top().second.second] = true;
            n--;
        }
        PQ.pop();
    }
    for(int i = 1; i < ans.size(); i++) cout << ans[i] << ' ';
    return 0;
}