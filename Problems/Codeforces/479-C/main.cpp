#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using pii = pair<int,int>;
int main() {
    int n;
    scanf("%d", &n);
    int cur = -1;
    vector<pii> a(n);
    for(auto &t : a) scanf("%d%d", &t.first, &t.second);
    sort(a.begin(),a.end());
    for(auto &t : a) {
        if (cur <= t.second) cur = t.second;
        else cur = t.first;
    }
    cout << cur << endl;
    return 0;
}