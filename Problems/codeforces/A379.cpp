
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
    int N, M; //n socks d of sock++
    cin >> N >> M;
    int counter = 0;
    for(int i = 0; i < N; i++) {
        counter++;
        if (i % M == 0) N++;
    }

    cout << counter-1 << endl;
 
    return 0;
}