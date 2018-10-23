#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <utility>
using namespace std;

struct R {
    int w, h;
};
bool mod[100010], cs[100010];
int main() {
    int n;
    cin >> n;
    memset(mod, 0, sizeof(mod));
    memset(cs, 1, sizeof(cs));
    vector<R> V(n);
    for(auto &t : V) cin >> t.w >> t.h;
    bool ok = true;
    for(int i = 0; i < n; i++) {
        if (i) {
            if (V[i].h > V[i-1].h) {
                swap(V[i].w, V[i].h);
                mod[i] = true;
            }
            if (V[i].w > V[i-1].h) mod[i] = true;
            if (V[i].h > V[i-1].h) ok = false;
        }
    }
    if (ok) puts("YES");
    else puts("NO");
    return 0;
}