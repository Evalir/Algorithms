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
typedef vector<long> VIL;
typedef vector<VI> VII;

int main() {
    long x;
    int count = 0;
    VIL el;

    for(int i = 0; i < 4; i++) {
        cin >> x;
        el.push_back(x);
    }

    sort(el.begin(), el.end());

    for(int i = 0; i < 4; i++) {
        if (el[i] - el[i+1] == 0) count++;
    }
    cout << count << endl;
    return 0;
}