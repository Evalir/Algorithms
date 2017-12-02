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
 
struct laptop {
    int p, q;

    bool  operator<  ( const laptop& right ) const {
        if (p < right.p)
           return true;
        else
           return false;
     }
};

int main(){
    int T;
    cin >> T;
    vector<laptop> laptops;
    for(int i = 0; i < T; i++) {
        laptop lt;
        int p, q;
        cin >> p >> q;
        lt.p = p;
        lt.q = q;
        laptops.push_back(lt);
    }

    sort(laptops.begin(), laptops.end());

    for(int i = 0; i < T - 1; i++) {
        if (laptops[i].q > laptops[i+1].q) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}