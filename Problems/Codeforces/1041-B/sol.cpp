#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    Long x,y,a,b;
    cin >> x >> y >> a >> b;
    Long g = __gcd(a,b);
    a /= g;
    b /= g;
    cout << min(x/a, y/b) << endl;
    return 0;
}
