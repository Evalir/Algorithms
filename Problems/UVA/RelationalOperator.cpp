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
    for(int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        if (x > y) cout << ">" << endl;
        else if (x < y) cout << "<" << endl;
        else cout << "=" << endl;
    }

    return 0;

}