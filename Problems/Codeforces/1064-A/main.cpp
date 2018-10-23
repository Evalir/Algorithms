#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> V(3);
    for(int &t : V) cin >> t;
    sort(V.rbegin(),V.rend());
    cout << max(0, V[0] - (V[1] + V[2]) + 1) << endl;
    return 0;
}