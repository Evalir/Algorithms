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
    int N, M;
    cin >> N >> M;

    if (N < M)  {
        cout << -1 << endl;
        return 0;
    }

    int stepcount = 0;
    int ps = 0;
    int ans = INF;
    //emulate two
    while (ps < N) {
        ps += 2;
        stepcount += 2;

    }

    ans = min(ans, stepcount);
    stepcount = 0;
    ps = 0;
    //emulate ones
    while (ps < N) {
        ps++;
        stepcount++;
    }

    ans = min(ans, stepcount);
    stepcount = 0;
    ps = 0;
    //greedily choose steps
    while(ps < N) {
        if (ps+2 < N) {
            
        }
    }

    

}