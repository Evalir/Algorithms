#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, l;
    cin >> s >> l;
    set<int> sz;
    for(int i = l; i > 0; i--) {
        if (s - (i&(-i)) >= 0) {
            s -= i & (-i);
            sz.insert(i);
        }
    }
    if (s == 0) {
        cout << sz.size() << endl;
        for(auto i : sz) cout << i << ' ';
    } else {
        puts("-1");
    }
    return 0;
}