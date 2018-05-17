#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef pair<int,int> pii;
struct point {
    int x,y;
};

int main() {
    point a, b;
    cin >> a.x >> a.y >> b.x >> b.y;
    if (a.x == b.x && a.y == b.y) {
        cout << -1 << endl;
        return 0;
    }
    //paralelo en y
    if (abs(a.x-b.x) == 0) {
        cerr << "on y" << endl;
        point lowpoint;
        lowpoint.x = a.x + abs(a.y-b.y);
        lowpoint.y = a.y;
        point highpoint;
        highpoint.x = a.x + abs(a.y-b.y);
        highpoint.y = b.y;
        cout << lowpoint.x << ' ' << lowpoint.y << ' ' << highpoint.x << ' ' << highpoint.y << endl;
        return 0;
    }
    //paralelo en x
    else if (a.y-b.y == 0) {
        cerr << "on x" << endl;
        point p1,p2;
        p1.x = min(a.x,b.x);
        p1.y = a.y + abs(a.x-b.x);
        p2.x = max(a.x,b.x);
        p2.y = b.y + abs(a.x-b.x);
        cout << p1.x << ' ' << p1.y << ' ' << p2.x << ' ' << p2.y << endl;
        return 0;
    }
    //diagonal
    else if ((abs(a.x-b.x) == abs(a.y-b.y))) {
        cerr << "diagonal" << endl;
        point p1,p2;
        p1.x = min(a.x,b.x);
        p1.y = max(a.y,b.y);
        p2.x = max(a.x,b.x);
        p2.y = min(a.y,b.y);
        cout << p1.x << ' ' << p1.y << ' ' << p2.x << ' ' << p2.y << endl;
        return 0;
    }
    
    cout << -1 << endl;
    return 0;
}
