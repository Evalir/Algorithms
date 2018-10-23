#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    Long n,d;
    cin >> n >> d;
    vector<Long> V(n);
    set<Long> u;
    for(auto &i : V) cin >> i;
    sort(V.begin(),V.end());
    Long ans = 0;
    for(int i = 0; i < n;i++) {
        Long newH = V[i] + d;
        Long mind = 1 << 30;
        mind = min(abs(V[i]-newH), abs(V[i+1]-newH));
        if (mind == d && !u.count(newH)) ans++, u.insert(newH);
        newH = V[i] - d;
        mind = 1 << 30;
        mind = min(abs(V[i]-newH), abs(V[i-1]-newH));
        if (mind == d && !u.count(newH)) ans++, u.insert(newH);
    }
    cout << ans << endl;


    return 0;
}