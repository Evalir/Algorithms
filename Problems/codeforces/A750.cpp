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
    int N, t;
    cin >> N >> t;
    VI PS; //Prefix Sum
    int acc = 0;
    int ans = 0;
    for(int i = 0; i < N; i++) {
        acc += i + 1;
        PS.push_back(acc*5);
    }

    for(int i = 0; PS[i]+t <= 240; i++) {
        ans++;
        if (i == PS.size()-1) break;
    }

    cout << ans << endl;

    return 0;

}