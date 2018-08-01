#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
using namespace std;

struct FenwickTree {

    vector<int> tri;
    FenwickTree(int N) : tri(N+10, 0) {}
    void update(int x, int d) {
        for (int i = x + 1; i < tri.size(); i += i&(-i)) {
            tri[i] = d;
            //cout << i << " :add : " << tri[i] << endl;
        }
    }

    int query(int x) {
        int ans = 0;
        for (int i = x + 1; i > 0; i -= i&(-i)) {
            ans += tri[i];
            //cout << i << " get: " << tri[i] << endl;
        }
        return ans;
    }

    void pr() {
        for(int i = 0; i < (int)tri.size(); i++)
            cout << tri[i] << ' ';
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;
    FenwickTree FT(n+1);
    int q;
    cin >> q;
    while(q--) {
        int a, x, y;
        cin >> a >> x >> y;
        ++x,++y;
        //cout << x << " : " << y << endl;
        if (!a) {
            FT.update(x,1);
            FT.update(y+1,0);
            //FT.pr();
        }
        if (a) {
            cout << FT.query(y) - FT.query(x-1) << "\n";
        }
    }
    return 0;
}