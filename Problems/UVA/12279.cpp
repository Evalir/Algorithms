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
    int T;
    int counter = 0;
    while (cin >> T && T != 0) {
        counter++;
        int c1 = 0, c2 = 0;
        VI el;
        for(int i = 0; i < T; i++) {
            int x;
            cin >> x;
            el.push_back(x);
        }

        for(int i = 0; i < el.size(); i++) {
            if (el[i] > 0) c1++;
            else c2++;
        }
        cout << "Case " << counter << ": " << c1 - c2 << endl;
    }

    return 0;
}