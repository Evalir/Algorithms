#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
ull gr[2][(int)3e5+(int)5e1];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> gr[0][i];
    }
    for(int i = 0; i < n; i++) {
        cin >> gr[1][i];
    }
    ull best = 0;
    ull cnt = 0;
    for(int i = 0; i < n; i++) {
        best += (gr[0][i])*cnt;
        cnt++;
    }
    for(int i = n-1; i >= 0; i--) {
        best += (gr[1][i])*cnt;
        cnt++;
    }
    cnt = 1;
    ull ans = 0;
    for(int i = 0; i < n; i++) {
        ans += (gr[1][i])*cnt;
        cnt++;
    }
    for(int i = n-1; i > 0; i--) {
        ans += (gr[0][i])*cnt;
        cnt++;
    }
    best = max(ans,cnt);
    

}