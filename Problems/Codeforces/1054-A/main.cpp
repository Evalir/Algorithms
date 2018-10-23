#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using pii = pair<Long,Long>;

int main() {
    int x,y,z,t1,t2,t3;
    cin >> x >> y >> z >> t1 >> t2 >> t3;
    int stairs = abs(x-y) * t1;
    cerr << stairs << endl;
    int elv = (abs(x-z))*t2 + 2*t3 + abs(x-y)*t2 + t3;
    cerr << elv << endl;
    if (stairs >= elv) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}