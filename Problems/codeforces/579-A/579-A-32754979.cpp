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
    int ans = 0;
    while(N) {
        if (N&1) ans++; // Checking if current bit is 1
        N >>= 1; //right shift all bits one place. This is the same as dividing
    }
    
    cout << ans << endl;

    return 0;
}