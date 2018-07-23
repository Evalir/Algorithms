#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    long long minn = 1e9+7;
    for(long long& i : v) {cin >> i; minn = min(minn, i);}
    map<long long,long long> dis;
    long long y;
    y = -1;
    bool ok = false;
    for(int i = 0; i < n; i++) {
        if (v[i] == minn && y == -1) {
            y = i;                       
        }
        else if (v[i] == minn && y != -1) {
            dis[y] = abs((i-y)-1);
            //cerr << "dis " << y << " : " << dis[y] << endl;
            ok = true;
            y = i;
        }
    }
    long long pt = 0;
    if (n == 1) dis[y] = 0;
    else if (n != -1)
    for(int i = y; ; i++) {
        i %= n;
        if (pt)
            if (v[i] == minn) {
                dis[y] = pt-1;
                break;
            }
        ++pt;
    }
    //cerr << "Dis " << y << " : " << dis[y] << endl;
    long long ans = 0;
    long long li = -1;
    for(int i = 0; i < n; i++) {
        if (v[i] == minn)
            li = i;
        ans = max(ans, minn*n + dis[i]);
    }
    cout << ans << endl;
    return 0;
}