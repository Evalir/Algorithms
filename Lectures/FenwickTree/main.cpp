#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

class FenwickTree {
public:
    const int n = 17;
    vector<int> nodes(n,0);
    void init() {
        for(int i = 0; i <= n; i++)
            node[i] = 0;
    }
    void update(int x, int v) {
        node[x] += v;
        if (x == n)
            return;
        update(x + (x & -x), v);
    }

    int query(int x) {
        if (x == 0)
            return node[x];
        return node[x] + query(x - (x & -x));
    }

    void print() {
        for(int i = 0; i <= 16; i++)
            cout << node[i] << ' ';
        cout << endl;
    }

};

int main() {
    FenwickTree FT;
    FT.init();
    FT.update(6,8);
    FT.update(3,2);
    FT.print();
    cout << FT.query(6) - FT.query(2) << endl;
    FT.update(8,10);
    FT.update(14,1);
    cout << FT.query(13) << endl;
    cout << FT.query(14) << endl;
    cout << FT.query(8) << endl;
    return 0;
}