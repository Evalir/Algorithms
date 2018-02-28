#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#define INF (int)1e9
#define MAX (int)1e7
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> points;
    int counter = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        points.push_back(x);
    }

    sort(points.begin(), points.end());

    for(int i = 0; i < n; i++) {
        if (abs(points[0] - points[i]) > d) counter++;
        else continue;
    }
    cout << counter << endl;
    return 0;
}