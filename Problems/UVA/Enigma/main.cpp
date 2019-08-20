#include <bits/stdc++.h>
using namespace std;
using Long = long long;

char buf[1010];
string s;
Long n;
int mem[1010][1010];
int dg[1010][1010];
bool dp(int pos, int mod){
    if (pos == s.size()) return !mod;
    if (mem[pos][mod] != -1) return mem[pos][mod];
    if (s[pos] != '?') {
        dg[pos][mod] = s[pos];
        return mem[pos][mod] = dp(pos + 1, (mod * 10 + (s[pos]-'0')) % n);
    }
    bool can = false;
    for(int dgt = 0; dgt <= 9; dgt++) {
        bool cur = dp(pos + 1, (mod * 10 + dgt) % n);
        if (cur) {
            dg[pos][mod] = dgt+'0';
            can = true;
            return mem[pos][mod] = cur;
        }
    }
    return mem[pos][mod] = can;
}

string number = "";

void getNum(int pos, int mod) {
    if (pos == s.size()) return;
    number += dg[pos][mod];
    getNum(pos + 1, (mod * 10 + (dg[pos][mod] - '0')) % n);
}
int main() {
    while(scanf("%s %lld", buf, &n) == 2) {
        s = buf;
        number = "";
        memset(mem,-1,sizeof(mem));
        int curmod = 0;
        int curnum = 0;
        for(int i = 0; i < s.size(); i++) {
            if (s[i] == '?') {
                int st = 0;
                if (i == 0) st = 1;
                for(int dgt = st ; dgt <= 9; dgt++) {
                    if (dp(i + 1, (curmod * 10 + dgt) % n)) {
                        dg[i][curmod] = dgt+'0';
                        s[i] = dgt+'0';
                        curnum = curnum * 10 + (s[i]-'0');
                        break;
                    }
                }
            } else {
                dg[i][curmod] = s[i];
                curmod = curmod*10 + s[i]-'0';
                curmod %= n;
                curnum = curnum * 10 + (s[i]-'0');
            }
        }
        getNum(0,0);
        bool ok = true;
        curmod = 0;
        for(int i = 0; i < s.size(); i++) {
            curmod = curmod * 10 + (number[i]-'0');
            curmod %= n;
        }
        if (curmod) ok = false;
        if (ok) {
            for(int i = 0; i < number.size(); i++) printf("%c",number[i]);
            printf("\n");
        }
        else printf("*\n");
    }
    return 0;
}