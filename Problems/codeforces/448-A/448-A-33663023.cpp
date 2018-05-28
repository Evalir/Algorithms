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
#define READALL(vec) for(int i = 0; i < N; i++){int x; cin >> x; (vec).pb(x);}
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<long long> VLL;
typedef pair<int, int> ii;
typedef vector<vector<ii> > Graph;
typedef map<int,int> FREQ;

int main(){
    int amax = 0, bmax = 0;
    int temp;
    for(int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        amax += x;
    }
    for(int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        bmax += x;
    }
    int max;
    cin >> max;

    int maxcapacity = (amax + 5 -1) /5 + (bmax + 10 - 1) / 10;
    if (maxcapacity <= max) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}