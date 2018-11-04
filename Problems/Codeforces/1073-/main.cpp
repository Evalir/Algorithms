#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
    int n;
    Long t;
    scanf("%d%lld", &n,&t);
    vector<Long> V(n);
    for(auto &i : V) scanf("%lld", &i);
    Long curm = t;
    Long mu = 0;
    Long cnt = 0;
    for(int i = 0; i < n; i++) {
        if (curm >= V[i]) {
            curm -= V[i];
            cnt++;
            mu += V[i];
        }
        if (curm <= 0) {
            cout << cnt << endl;
            return 0;
        }
    }
    Long spins = curm/mu;
    curm = curm - (spins*mu);
    cnt = cnt + (spins*cnt);
    for(int i = 0; i < n; i++) {
        if (curm >= V[i]) {
            curm -= V[i];
            cnt++;
            mu += V[i];
        }
    }
    mu = 0;
    Long ncnt = 0;
    bool ok = true;
    while(ok) {
        vector<Long> newV;
        for(int i = 0; i < n; i++) {
            if (curm >= V[i]) newV.push_back(V[i]);
        }
        ok = false;
        for(int i = 0; i < newV.size(); i++) {
            if (curm >= newV[i]) {
                curm -= newV[i];
                ok = true;
                ncnt++;
                mu += newV[i];
            }
        }
    }
    cout << cnt+ncnt << endl;
    return 0;
}