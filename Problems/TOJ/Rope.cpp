#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#define PI 3.14159
using namespace std;

struct Point {
  double x, y;
};

double tpdistance(Point a, Point b) {
    return sqrt(((b.x-a.x)*(b.x-a.x)) + ((b.y-a.y)*(b.y-a.y)));
}

int main() {
    int n;
    double r;
    cin >> n >> r;
    double ans = 0;
    vector<Point> np(200);
    for(int i = 0; i < n; i++)
        cin >> np[i].x >> np[i].y;
    for(int i = 0; i < n-1; i++)
        ans += tpdistance(np[i],np[i+1]);
    ans += tpdistance(np[0],np[n-1]) + 2 * PI * r;
    printf("%.2lf\n", ans);
    return 0;
}
