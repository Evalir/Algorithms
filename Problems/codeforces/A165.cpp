#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
  int x, y;  
};

int main() {
    int n;
    cin >> n;
    vector<Point> ps;
    
    for(int i = 0; i < n; i++) {
        Point p;
        cin >> p.x >> p.y;
        ps.push_back(p);
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int u = 0, d = 0, r = 0, l = 0;
        for(int j = 0; j < n;j ++) {
            if (i != j) {
                if ((ps[j].x > ps[i].x && ps[j].y == ps[i].y))
                    r++;
                else if ((ps[j].x < ps[i].x && ps[j].y == ps[i].y))
                    l++;
                else if ((ps[j].x == ps[i].x && ps[j].y > ps[i].y))
                    u++;
                else if ((ps[j].x == ps[i].x && ps[j].y < ps[i].y))
                    d++;
            }
        }
        if (u > 0 && l > 0 && d > 0 && r > 0)
            ans++;
    }
    
    cout << ans << endl;
    return 0;

}
