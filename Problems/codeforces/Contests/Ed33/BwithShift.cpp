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
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
 
int main(){
    int N;
    cin >> N;
    int best = 1;
    for(int i = 1; ; i++) {
        int p = (1 << (i+1)) - 1;
        int x = p << i;
        if (N % x == 0) {
            if (best < x) {
                best = x;
            }
        }

        if (x > 100000) {
            break;
        }

    }

    cout << best << endl;

    return 0;
}