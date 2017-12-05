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
    int A, B;
    cin >> A >> B;
    int ans = 0;
    for(int i = 0; A <= B; i++) {
        ans++;
        A *= 3;
        B *= 2;

    }

    cout << ans << endl;
    return 0;
}