#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    auto comp1 = [&](pii a, pii b) {
        return a.first > b.first;
    };
    int n, k;
    scanf("%d%d", &n, &k);
    vector<pii> V(n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &V[i].first);
        V[i].second = i;
    }
    sort(V.begin(), V.end(), comp1);
    printf("%d\n", V[k-1].first);
    for(int i = 0; i < k; i++) {
        printf("%d ", V[i].second + 1); //ok grasia
    }
    puts("");
    return 0;
}