#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <bitset>
#include <list>
#include <iomanip>
#define INF (int)1e9;
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
    int P;
    cin >> P;

    for(int i = 0; i < P; i++) {

        double r;
        cin >> r;
        double diam = r+r;
        double pi = acos(0) * 2.0;
        double circleArea = pi * (r*r);
        double squareArea = (diam*diam) / (2);
        double remain = circleArea - squareArea;
        cout << fixed << setprecision(2) << remain << endl;
    }
    return 0;
}