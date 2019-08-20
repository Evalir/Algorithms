#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &t: a) cin >> t;
    sort(a.begin(), a.end());
    long long sum = 0;
    for(auto &t : a) sum += t * 1LL;
    bool same = false;
    if (!(sum & 1) && (sum - a[a.size() - 1]) == a[a.size() - 1]) puts("YES");
    else puts("NO");
}