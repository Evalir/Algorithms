#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <cstring>
#include <string>
using namespace std;
using Long = long long;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ok = true;
        for(int i = 0; i < n/2; i++) {
            if (abs(s[i]-s[n-1-i]) > 2 || abs(s[i]-s[n-1-i]) == 1) {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}