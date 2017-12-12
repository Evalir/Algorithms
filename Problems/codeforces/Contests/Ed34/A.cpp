#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#include <sstream>
#define INF (int)1e9
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef map<int,int> FREQ;
typedef pair<int, int> ii;

struct Point {
    long x, y;
};

int main(){
    int N;
    cin >> N;
    vector<Point> points;
    int cA = 0, cB = 0; //counter clockwise;

    for(int i = 0; i < N; i++) {
        long a, b;
        cin >> a >> b;
        Point x;
        x.x = a;
        x.y = b;
        points.push_back(x);
    }

    for(int i = 0; i < points.size(); i++) {
        if (points[i].x > 0 && points[i].y >= 0) cA++;
        else if (points[i].x < 0 && points[i].y >= 0) cB++;
        else if (points[i].x < 0 && points[i].y <= 0) cB++;
        else if (points[i].x > 0 && points[i].y <= 0) cA++;
    }
    //only one point on one axis
    if (cA == 0 || cB == 0) {
        cout << "Yes" << endl;
        return 0;
    }
    else if (cA == 1 || cB == 1) {
        cout << "Yes" << endl;
        return 0;
    }
    else {
        cout << "No" << endl;
        return 0;
    }
    return 0;
}