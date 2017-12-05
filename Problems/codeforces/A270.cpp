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
    int N, T;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> T;
        if (360 % (180 - T) == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}