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
#define INF (int)1e9;
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
    int N;
    cin >> N;
    int x, y;

    if (N % 2 != 0) {
        x = 9;
        y = N-9;
    }
    else if (N % 2 == 0) {
        x = 8;
        y = N-8;
    }
    cout << x << " " << y << endl;

 
    return 0;
}