#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct LowCount {
    vector<int> V;
    LowCount(const vector<int>& v) {
        V = v;
        sort(V.begin(), V.end());
    };
    int query(int n) {
        int Q = upper_bound(V.begin(),V.end(), n) - V.begin();
        return Q;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> s(n),z(m);
    for(int &t : s) cin >> t;
    for(int &t : z) cin >> t;
    LowCount LC(s);
    for(int &t : z) {
        int q = LC.query(t);
        cout << q << ' ';
    }
    puts("");

    return 0;
}