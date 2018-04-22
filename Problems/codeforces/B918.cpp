#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>=
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
    int n, m;
    cin >> n >> m;
    vector<string> s;
    vector<string> sip;
    vector<string> com;
    vector<string> comip;

    for(int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        s.pb(a);
        sip.pb(b);
    }

    for(int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        com.pb(a);
        comip.pb(b);
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if (comip[i] == sip[j] + ';') {
                cout << com[i] << " " << comip[i] << " #" << s[j] << endl;
            }
        }
    }

    return 0;
}