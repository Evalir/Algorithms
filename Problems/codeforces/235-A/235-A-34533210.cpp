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
    unsigned long long n;
    cin >> n;
    if (n <= 3) {
        if (n == 1) cout << 1 << endl;
        else if (n == 2) cout << 2 << endl;
        else if (n == 3) cout << 6 << endl;
    }
    else if (n % 2 == 1) {
        cout << (n-2)*(n-1)*n << endl;
    }
    else if (n % 3 == 0 && ((n-3)% 3 == 0)) {
        cout << (n-1)*(n-2)*(n-3) << endl;
    }
    else {
        cout << n*(n-1)*(n-3) << endl;
    }

    return 0;
}