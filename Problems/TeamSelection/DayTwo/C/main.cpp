#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
using namespace std;
using ll = long long;
int main() {
    ll k, n, m;
    cin >> k >> n >> m;
    ll cnt = 0;
    ll mcnt = 0;
    while(k--) {
        string s;
        cin >> s;
        if (s != "Mars" && s != "mars")
            cnt++;
        else
            mcnt++;
    }
    while(mcnt--) {
        if (n == 0)
            break;
        n--;
    }
    while(cnt > 0 && (n > 0 || m > 0)) {
        cnt--;
        if (n > 0) {
            n--;
        }
        else {
            m--;
        }
    }
    cout << n+m << endl;
    return 0;
}