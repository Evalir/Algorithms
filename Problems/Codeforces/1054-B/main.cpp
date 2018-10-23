#include <bits/stdc++.h>
using namespace std;
using Long = long long;

struct Pos {
    bool operator<(const Pos &rhs) const {
        if (x < rhs.x)
            return true;
        if (rhs.x < x)
            return false;
        return y < rhs.y;
    }

    bool operator>(const Pos &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const Pos &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const Pos &rhs) const {
        return !(*this < rhs);
    }

    int x,y;
};

int main() {
    int n;
    cin >> n;
    vector<int> V(n);
    for(int i = 0; i < n; i++) cin >> V[i];
    int min = 0;
    for(int i = 0; i < n; i++) {
        if (V[i] > min) {
            cout << i + 1 << endl;
            return 0;
        }
        else min = max(min,V[i] + 1);
    }
    cout << -1 << endl;
    return 0;
}