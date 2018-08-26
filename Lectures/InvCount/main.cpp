#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using Long = long long;

struct LowCount {
    vector<Long> V;
    LowCount(const vector<Long>& v) {
        V = v;
        sort(V.begin(), V.end());
        V.erase(unique(V.begin(),V.end()),V.end());
    };
    int query(Long n) {
        int Q = lower_bound(V.begin(),V.end(), n) - V.begin();
        return Q;
    }
};

struct FenwickTree {

    vector<int> tri;
    FenwickTree(int N) : tri(N+10, 0) {}
    void add(int x, int d) {
        for (int i = x + 1; i < tri.size(); i += i&(-i)) {
            tri[i] += d;
        }
    }

    int query(int x) {
        int ans = 0;
        for (int i = x + 1; i > 0; i -= i&(-i)) {
            ans += tri[i];
        }
        return ans;
    }

    void pr() {
        for(int i = 0; i < (int)tri.size(); i++)
            cout << i+1 << ' ';
        cout << endl;
        for(int i = 0; i < (int)tri.size(); i++)
            cout << tri[i] << ' ';
        cout << endl;
    }
};

vector<Long> V;
vector<int> cV;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        V.clear();
        cV.clear();
        V.assign(n, 0);
        for(Long &t : V) cin >> t;
        LowCount v(V);
        for(Long& i : V) {
            cV.push_back(v.query(i));
        }

        int MAX_VAL = *max_element(cV.begin(), cV.end());
        FenwickTree FT(n);
        Long inv = 0;
        for(auto i : cV) {
            inv += FT.query(MAX_VAL)-FT.query(i);
            FT.add(i,1);
        }
        cout << inv << '\n';
    }

    return 0;
}