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
    int x,y,z;
    cin >> x >> y >> z;
    int sum = 0;

    int pos1 = x + z + y;
    int pos2 = x + x + y + y;
    int pos3 = x + z + z + x;
    int pos4 = y + z + z + y;

    if (pos1 <= pos2 && pos1 <= pos3 && pos1 <= pos4) cout << pos1 << endl;
    else if (pos2 <= pos1 && pos2 <= pos3 && pos2 <= pos4) cout << pos2 << endl;
    else if (pos3 <= pos1 && pos3 <= pos2 && pos3 <= pos4) cout << pos3 << endl;
    else if (pos4 <= pos1 && pos4 <= pos2 && pos4 <= pos3) cout << pos4 << endl;
    return 0;
}