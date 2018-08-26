#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> s(m), f;
    for(auto &t : s)
        scanf("%d", &t);
    if (m == 0) {
        printf("YES\n");
        return 0;
    }
    sort(s.begin(), s.end(), greater<int>());
    for(int i = 0; i < m; i++) {
        if (i)
            f.push_back(s[i]-s[i-1]);
    }
    int cnt = 0;
    for(auto &t : f) {
        if (cnt > 1) {
            puts("NO");
            return 0;
        }
        if (t == -1)
            cnt++;
        else
            cnt = 0;
    }
    if (cnt > 1 || s[0] == n || s[m-1] == 1)
        puts("NO");
    else
        puts("YES");
    return 0;
}