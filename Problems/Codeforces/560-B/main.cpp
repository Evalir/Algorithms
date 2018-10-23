#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;

int main() {
    int a,b;
    pii x,y;
    cin >> a >> b >> x.first >> x.second >> y.first >> y.second;
    pii t = {x.first + y.first, y.second + x.second};
    bool ans = false;
    if (b-x.second-y.second >= 0 && x.first <= a && y.first <= a) ans = true;
    if (b-x.first-y.first >= 0 && x.second <= a && y.second <= a) ans = true;
    if (b-x.first-y.second >= 0 && x.second <= a && y.first <= a) ans = true;
    if (b-x.second-y.first >= 0 && x.first <= a && y.second <= a) ans = true;
    if (a-x.second-y.second >= 0 && x.first <= b && y.first <= b) ans = true;
    if (a-x.first-y.first >= 0 && x.second <= b && y.second <= b) ans = true;
    if (a-x.first-y.second >= 0 && x.second <= b && y.first <= b) ans = true;
    if (a-x.second-y.first >= 0 && x.first <= b && y.second <= b) ans = true;
    ans ? puts("YES") : puts("NO");
    return 0;
}