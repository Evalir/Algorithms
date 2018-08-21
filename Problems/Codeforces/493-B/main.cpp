#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> s,z, lm(n);
    long long ans,anw;
    ans = anw = 0;
    for(int i = 0;  i < n; i++) {
        int x;
        cin >> x;
        if (x > 0) {
            s.push_back(x);
            lm[i] = 1;
            ans += x;
        }
        else {
            z.push_back(-x);
            lm[i] = 0;
            anw -= x;
        }
    }

    if (ans != anw) {
        if (ans > anw) cout << "first" << endl;
        else cout << "second" << endl;
    }
    else {
        if (s == z) {
            if (lm[n-1]) cout << "first" << endl;
            else cout << "second" << endl;
        }
        else {
            for(int i = 0; i < min(s.size(), z.size()); i++) {
                if (s[i] > z[i]) {
                    cout << "first" << endl;
                    return 0;
                }
                else if (s[i] < z[i]){
                    cout << "second" << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}