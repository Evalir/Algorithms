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

struct Friend { 
    int money, ff; 
    bool  operator<  ( const Friend& right ) const {
        if (money < right.money)
           return true;
        else
           return false;
     }
    };

vector<Friend> fr;

int main(){
    int n, d;
    cin >> n >> d;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        Friend z;
        z.money = x;
        z.ff = y;
        fr.pb(z);
    }

    int l = 0, r = 0;
    int maxhp = 0;

    while(l <= r) {
        if ()
    }


}