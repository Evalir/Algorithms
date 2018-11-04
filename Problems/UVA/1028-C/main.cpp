#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};
struct Rect {
    Point a,b;
};
int main() {
    int n;
    cin >> n;
    vector<Rect> V(n);
    multiset<int> x, y, lx, ly;
    for(auto &R : V)  {
        cin >> R.a.x >> R.a.y >> R.b.x >> R.b.y;
        x.insert(R.a.x);
        lx.insert(R.b.x);
        y.insert(R.a.y);
        ly.insert(R.b.y);
    }
    for(auto &bad : V) {
        x.erase(x.find(min(bad.a.x, bad.b.x)));
        lx.erase(lx.find(max(bad.a.x, bad.b.x)));
        y.erase(y.find(min(bad.a.y, bad.b.y)));
        ly.erase(ly.find(max(bad.a.y, bad.b.y)));

        if((*x.rbegin()) <= (*lx.begin())  &&  (*y.rbegin())<=(*ly.begin())){
            cout << (*x.rbegin()) << " " << (*ly.begin());
            return 0;
        }


        x.insert(min(bad.a.x, bad.b.x));
        lx.insert(max(bad.a.x, bad.b.x));
        y.insert(min(bad.a.y, bad.b.y));
        ly.insert(max(bad.a.y, bad.b.y));
    }
    assert(false);
    return 0;
}