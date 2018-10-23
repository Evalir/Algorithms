#include <bits/stdc++.h>
using namespace std;
using Long = long long;
const Long F = 541, MOD = 1000000033;
int POW[100];
void Pr() {
    Long FP = 1;
    for(int i = 0; i < 99; i++) {
        POW[i] = FP % MOD;
        FP *= F;
        FP %= MOD;
    }
}
int getHash(string &s) {
    Long h = 0;
    for (int i = 0; i < s.size(); i++) {
        h += (POW[i] * s[i]*1LL) % MOD;
        h %= MOD;
    }
    h %= MOD;
    return h;
}
int main() {
    int n;
    map<int,int> H;
    cin >> n;
    Pr();
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        int k = getHash(a);
        if (H.count(k) > 0) {
            cout << a << H[k] << endl;
            H[k]++;
        } else {
            cout << "OK" << endl;
            H[k] = 1;
        }
    }
    return 0;
}