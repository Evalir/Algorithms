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

struct Point {
    int x,y;
};

int main() {

    int N;
    Point p;
    p.x = 0;
    p.y = 0;
    string steps;
    cin >> N >> steps;

    for(int i = 0; i < N; i++) {
        if (steps[i] == 'U')
            p.y += 1;
        else if (steps[i] == 'D')
            p.y -= 1;
        else if (steps[i] == 'L')
            p.x -= 1;
        else if (steps[i] == 'R')
            p.x += 1;
    }
    
    int dx = abs(p.x);
    int dy = abs(p.y);
    cout << N - dx - dy << endl;
    return 0;
}
