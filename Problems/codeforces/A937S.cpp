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
    int n;
    cin >> n;
    set<int> S;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) continue;
        else {
            S.insert(x);
        }
    }

    cout << S.size() << endl;
}