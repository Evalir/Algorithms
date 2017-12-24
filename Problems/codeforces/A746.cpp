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

int main(){
    int a, b, c, maxel = 0;
    cin >> a >> b >> c;
    if (a < 1 || b < 2 || c < 4) {
        cout << 0 << endl;
        return 0;
    }
    else {
        for(int i = 1; i <= 1000; i++) {
            if (i*1 > a || i*2 > b || i*4 > c) {
                cout << maxel << endl;
                return 0;
            }
            else maxel = i*1 + i*2 + i*4;
        }
    }

    return 0;
}