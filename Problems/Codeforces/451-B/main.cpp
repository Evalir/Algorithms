#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int& t : v)
        cin >> t;
    vector<int> k = v;
    sort(k.begin(), k.end());
    int l = -1, r = -1;
    for(int i = 0; i < n; i++) {
        if (v[i] == k[i] && l != -1) {
            if (r == -1) {
                r = i - 1;
            }
        }
        if (v[i] == k[i] && l == -1) {
            continue;
        }
        else {
            if (v[i] != k[i] && l == -1) {
                l = i;
            }
            if (v[i] != k[i] && l != -1) {
                r = i;
            }
        }
    }
    if (r == -1 && l != -1) r = v.size()-1;
    reverse(v.begin() + l, v.begin()+r+1);
    for(int i = 0; i < n; i++) {
        if (v[i] == k[i])
            continue;
        else {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;
    if (l == -1 && r == -1)
        cout << 1 << ' ' << 1 << endl;
    else
        cout << l+1 << ' ' << r+1 << endl;
    return 0;
}