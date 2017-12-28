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
    string a, b;
    cin >> a >> b;
    //always get the lowest string first
    set<string> logins;

    for(int i = 0; i <= a.size(); i++) {
        for(int j = 0; j <= b.size(); j++) {
            string S = "";
            if (i > 0) S += a.substr(0, i);
            if (j > 0) S += b.substr(0, j);
            if (i > 0 && j > 0) cout << S << " CURRENT PREFIX" << endl;
            if (S != "" && i > 0 && j > 0) logins.insert(S);
        }
    }

    for(auto x : logins) {
        cout << x << endl;
        break;
    }
    return 0;
}