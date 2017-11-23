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
    int x, y, z;
    cin >> x >> y >> z;
    VI el;
    el.push_back(x);
    el.push_back(y);
    el.push_back(z);

    sort(el.begin(), el.end());

    int dist = 0;
    dist += abs(el[1] - el[0]);
    dist += abs(el[1] - el[2]);

    cout << dist << endl;

    return 0;
}