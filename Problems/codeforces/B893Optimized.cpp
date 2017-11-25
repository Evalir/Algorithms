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
    int best = 0;
    for(int i = 0; i < N/2; i++) {
        int x = (pow(2, i) - 1) * (pow(2, i-1));

        if (x > best) {
            best = x;
        }
        if (x > 100000) break;
    }

    cout << best << endl;

    return 0;
}