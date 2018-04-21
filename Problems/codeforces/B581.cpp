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


int main() {
    int n;
    cin >> n;
    vector<int> houses(n, 0);
    VI heights(n, 0);

    int bh = 0;
    for(int i = 0; i < n; i++) {
        cin >> houses[i];
    }

    for(int i = n-1; i >= 0; i--) {
        if (i == n-1) {heights[i] = 0; bh = max(bh, houses[i]);}
        else {
            heights[i] = max(0, abs(houses[i] - (bh+1)));
            bh = max(bh, houses[i]);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << heights[i] << " ";
    }
    return 0;

}