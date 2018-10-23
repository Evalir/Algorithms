#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> V(n);
    set<int> S;
    for(auto &i : V) cin >> i;
    sort(V.begin(), V.end());
    for(auto &i : V) {
        if (i % k != 0) S.insert(i);
        else if (S.find(i/k) == S.end()) S.insert(i);
    }
    cout << S.size() << endl;
    return 0;
}