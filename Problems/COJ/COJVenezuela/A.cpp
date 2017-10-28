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
#define INF (int)1e9;
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

bool compareEl (vector<int> el, int l, int r) {
    if (el[l] == el[r]) return false;
    else return true;

}
int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        vector<int> el;
        int dataSet;
        
        cin >> dataSet;
       for(int j = 0; j < 15; j++) { //read dataset
            int x;
            cin >> x;
            el.push_back(x);
       }

       


    }
 
    return 0;
}
