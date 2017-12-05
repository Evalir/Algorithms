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
 
struct Point {
    int x, y;
};

int main(){
    int Q;
    while (cin >> Q && Q != 0) {
        Point division;
        int x, y;
        cin >> x >> y;
        division.x = x;
        division.y = y;
        for(int i = 0; i < Q; i++) {
            cin >> x >> y;
            //northeast case
            if (x > division.x && y > division.y ) cout << "NE" << endl;
            else if (x == division.x || division.y == y) cout << "divisa" << endl; //divisa case
            else if (x < division.x && y > division.y) cout << "NO" << endl; //northwest case
            else if (x > division.x && y < division.y) cout << "SE" << endl; //northeat casee
            else if (x < division.x && y < division.y) cout << "SO" << endl; //northwest cae

        }
    }


    return 0;
}