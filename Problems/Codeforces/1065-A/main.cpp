#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
    int t;
    cin >> t;
    while(t-->0) {
        Long s,a,b,c,x,y;
        cin >> s >> a >> b >> c;
        x = s/c;
        y = (x/a)*b;
        cout << x + y << endl;
    }
    return 0;
}