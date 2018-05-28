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
    int n, m, l, r;
    string S;
    char c1, c2;
    cin >> n >> m;
    cin >> S;

    for(int i = 0; i < m; i++) {
        cin >> l >> r >> c1 >> c2;
        l -= 1;
        r -= 1;

        for(int j = l; j <= r; j++) {
            if (S[j] == c1) S[j] = c2;
            else continue;
        }
    }
    cout << S << endl;
    return 0;
}