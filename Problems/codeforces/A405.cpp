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
    int N;
    cin >> N;
    VI el;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }

    sort(el.begin(), el.end());

    for (int i = 0; i < N; i++) {
        cout << el[i] << " ";
    }

    return 0;
}