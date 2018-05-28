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
    int ce, co;
    ce = 0, co =0;
    VI el;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0)
            ce++;
        else
            co++;

        el.push_back(x);
    }

    if (ce > co) {
        for(int i = 0; i < N; i++) {
            if (el[i] % 2 != 0) {
                cout << i+1 << endl;
                return 0;
            }
        }
    } else {
        for(int i = 0; i < N; i++) {
            if (el[i] % 2 == 0) {
                cout << i+1 << endl;
                return 0;
            }
        }
    }

    return 0;
}