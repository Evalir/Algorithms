#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int,int> seq;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        seq[x]++;                          
    }
    vector<pair<int,int> > V;
    vector<int> ans;
    for(auto i : seq)
        V.push_back({i.first, i.second});
    bool flag = false;
    for(int i = 0; i < (int)V.size(); i++)
        if (V[i].second > 1) {
            ans.push_back(V[i].first);
            V[i].second = 1;
            if (V[i].second == 1 && i == V.size()-1)
                flag = true;
        }
    for(int i = V.size()-1; i >= 0; i--) {
        if (i == V.size()-1 && flag)
            continue;
        else
            ans.push_back(V[i].first);
    }
    cout << ans.size() << endl;
    for(auto i : ans)
        cout << i << ' ';
    return 0;
}