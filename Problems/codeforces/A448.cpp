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
    int shelf = 0;
    int maxA = 0;
    int maxB = 0;
    for(int i = 0; i < 3; i++) {
        cin >> A;
        maxA += A;
    }
    
    for(int i = 0; i < 3; i++) {
        cin >> B;
        maxB += B;
    }
    cin >> shelf;

    int maxcapacity = (10 * (shelf/2) + (5 * (shelf/2)));
    //cout << maxcapacity << endl;
    if (maxcapacity == 0) maxcapacity = 1;
    if (maxcapacity >= maxA && maxcapacity >= maxB) cout << "YES" << endl;
    else cout << "NO" << endl;

    
    return 0;
}