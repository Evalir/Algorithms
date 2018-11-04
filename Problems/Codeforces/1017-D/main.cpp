#include <bits/stdc++.h>
using namespace std;
int n,m,q;
map<int,int> freq;
vector<int> VAL(1 << 12);
int scoreFreq[1 << 12][101];
int pfScore[1 << 12][102];
int wi[13];
int convert(string &s) {
    int res = 0;
    int k = 0;
    for(int i = s.size()-1; i >= 0; i--) {
        res += (1LL << k) * (s[i] - '0');
        k++;
    }
    return res;
}
int inv(int v) { return (1<<n)-1-v; };
int getMatch(int i, int j) {
    int m = (i & j) | (inv(i) & inv(j));
    return m;
}
void precalculate() {
    for(int mask = 0; mask < (1 << n); mask++) {
        for(int j = 0; j < n; j++) {
            if (mask & ( 1 << j)) {
                VAL[mask] += wi[j];
            }
        }
    }
    for(int mask = 0; mask < (1 << n); mask++) {
        for (auto it : freq) {
            int score = VAL[getMatch(mask,it.first)];
            if (score > 100) continue;
            scoreFreq[mask][score] += it.second;
        }
    }
    for(int mask = 0; mask < (1 << n); mask++) {
        for(int i = 0; i <= 100; i++) {
            pfScore[mask][i] = scoreFreq[mask][i];
            if (i) pfScore[mask][i] += pfScore[mask][i-1];
        }
    }
}
char buf[13];
int main() {
    scanf("%d%d%d", &n, &m, &q);
    for(int i = 0; i < n; i++) scanf("%d", &wi[i]);
    reverse(wi, wi + n);
    for(int i = 0; i < m; i++) {
        string s;
        scanf("%s", buf);
        s = buf;
        freq[convert(s)]++;
    }
    precalculate();
    //pr(n);
    while(q--) {
        string s;
        int k;
        scanf("%s%d", buf, &k);
        s = buf;
        int ans = 0;
        printf("%d\n",pfScore[convert(s)][k]);
    }
    return 0;
}
