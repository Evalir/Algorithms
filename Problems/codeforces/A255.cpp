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
    int N;
    int a = 0, b = 0, c = 0;
    cin >> N;
    VI wk;
    READALL(wk);
    vector<string> cwk;
    cwk.pb("chest");
    for(int i = 0; i < N; i++) {
        if (i == 0 ) continue;
        else if (cwk[i-1] == "chest") {
            cwk.pb("biceps");
        }
        else if (cwk[i-1] == "biceps") {
            cwk.pb("back");
        }
        else if (cwk[i-1] == "back") {
            cwk.pb("chest");
        }
    }

    //solve
    for(int i = 0; i < N; i++) {
        if (cwk[i] == "chest") a += wk[i];
        else if (cwk[i] == "biceps") b += wk[i];
        else if (cwk[i] == "back") c += wk[i];
    }

    if (a > b && a > c) cout << "chest" << endl;
    else if (b > a && b > c) cout << "biceps" << endl;
    else if (c > a && c > b) cout << "back" << endl;

    return 0;
}