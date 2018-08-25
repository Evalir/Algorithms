#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

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
            cout << "query for i " << i << " : " << query(i) << ' ';
        cout << endl;
    }
};

int main() {
    FenwickTree FT(16);
    FT.add(6,8);
    FT.add(3,2);
    FT.pr();
    cout << FT.query(6) - FT.query(2) << endl;
    FT.add(8,10);
    FT.add(14,1);
    FT.pr();
    cout << FT.query(13) << endl;
    cout << FT.query(14) << endl;
    cout << FT.query(8) << endl;
    return 0;
}