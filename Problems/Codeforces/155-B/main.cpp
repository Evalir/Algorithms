#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ii = pair<int,int>;

bool comp1(ii a, ii b) {return a.first > b.first;}
bool comp2(ii a, ii b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return a.first > b.first;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<ii> s(n);
    for(auto &t : s) scanf("%d %d", &t.first, &t.second);
    sort(s.begin(), s.end(), comp1);
    int ans = 0;
    int cnt = 0;
    int k = 1;
    for(int i = 0; i < n; i++) {
        if (k > 0) {
            cnt += s[i].first;
            ans = max(ans, cnt);
            --k;
            k += s[i].second;
        }
        else break;
    }
    cnt = 0;
    k = 1;
    sort(s.begin(), s.end(), comp2);
    for(int i = 0; i < n; i++) {
        if (k > 0) {
            cnt += s[i].first;
            ans = max(ans, cnt);
            --k;
            k += s[i].second;
        }
    }

    printf("%d", ans);
    return 0;
}