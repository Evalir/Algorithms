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
#define MAX (int)1e7
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;


struct Point {
    int x,y;
};

int main() {
    int N;
    int best = 0;
    int counter = 0;
    string M;
    Point p;
    cin >> N;
    
        cin >> M;

    for(int i = 0; i < M.length(); i++) {
        counter++;
        //cout << p.x << " X Y " << p.y << endl;

        if(M[i] == 'U') {
            p.y += 1;
        }
        if(M[i] == 'D') {
            p.y -= 1;
        }
        if(M[i] == 'L') {
            p.x -= 1;
        }
        if(M[i] == 'R') {
            p.x += 1;
        }

        if(p.x == 0 && p.y == 0) {
            best = counter;
        }
    }

    cout << best << endl;
 
    return 0;
}
