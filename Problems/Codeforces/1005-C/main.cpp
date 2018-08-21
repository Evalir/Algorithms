#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> s(n);
    map<int,int> k;
    for(int &t : s) scanf("%d", &t);
    for(int &t : s) k[t]++;
    int ans = 0;
    for(int &t : s) {
        bool ok = false;
        for(int i = 0; i <= 30; i++) {
            int x = 1 << i;
            int z = x - t;
            if (z < 0) continue;
            if (z == t && k[t] == 1) continue;
            if (k[z] > 0) {
                ok = true;
            }
        }
        if (!ok) ans++;
    }

    printf("%d", ans);
    puts("");
    return 0;
}