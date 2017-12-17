#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#include <sstream>
#define INF (int)1e9
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef map<int,int> FREQ;
typedef pair<int, int> ii;

struct Point {
    int x, y;
};

int main(){
    Point p1, p2, p3, p4;
    cin >> p1.x >> p1.y >> p2.x >> p2.y;
    //check if rectangle can't be formed (if it's diagonal)
    if (abs(p2.x - p1.x) != abs(p2.y - p2.x)) {
        cout << -1 << endl;
        return 0;
    }
    //if can't be formed (two points overlap)
    else if (p2.y == p1.y && p2.x == p1.x) {
        cout << -1 << endl;
        return 0;
    }
    else { 
        //form square
        //case: two points over each other (p2 over p1)
        if (p1.x == p2.x) {
            p3.x = p1.x + (p2.y - p1.y); //forming lower point
            p3.y = p1.y;
            p4.x = p3.x;
            p4.y = p2.y;
        }
        //two points parallel
        else if (p1.y == p2.y) {
            p3.x = p1.x;
            p3.y = p1.x + (p2.x - p1.x);
            p4.x = p2.x;
            p4.y = p2.x + (p2.x - p1.x);
        }
        //diagonal but possible
        else if (p1.x != p1.x && p1.y != p1.y) {
            p3.x = p1.x;
            p3.y = p2.y;
            p4.x = p2.x;
            p4.y = p1.y;
        }
    }

    cout << p3.x << " " << p3.y << " " << p4.x << " " << p4.y << endl;
    


}