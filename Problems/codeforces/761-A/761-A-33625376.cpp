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
    int a, b;
    cin >> a >> b;
    int enums = 0, onums = 0;
    for(int i = 1; i <= 10000; i++) {
        if (enums == a && onums == b && onums != 0) {
            cout << "YES" << endl;
            return 0;
        }
        if (i % 2 == 0) enums++;
        if (i % 2 == 1) onums++;
    }
    enums = 0, onums = 0;
    for(int i = 2; i <= 10000; i++) {
        if (enums == a && onums == b && enums != 0) {
            cout << "YES" << endl;
            return 0;
        }
        if (i % 2 == 0) enums++;
        if (i % 2 == 1) onums++;
    }
    cout << "NO" << endl;
    return 0;
}