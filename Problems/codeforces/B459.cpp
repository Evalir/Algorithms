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
#include <string>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
 
int main(){
    int N;
    cin >> N;
    map<long long, long long> ways;
    for(int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        ways[x]++;
    }
    
    if(ways.size() == 1) {
        cout << 0 << ' ' << 1 << endl;
        return 0;
    }

    long long maxDif = abs(ways.begin()->first-ways.rbegin()->first);
    cout << maxDif << ' ' << ways.begin()->second * ways.rbegin()->second <<endl;
    return 0;
}
