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
typedef pair<unsigned long long, unsigned long long> ii;
typedef vector<vector<ii> > Graph;
typedef map<int,int> FREQ;

int main(){
    unsigned long long a,b;
    cin >> a >> b;
    //make sure a % b always works (max % min)

    while (a != 0 || b != 0) {
        if (a >= 2*b){
            unsigned long long res = a % (2*b);
            a = res;
        }
        else if (b >= 2*a) {
            ull res = b % (2*a);
            b = res;
        }
        else 
            break;
        
        
        if (a == 0 || b == 0) break;
    }
    cout << a << ' ' << b << endl;

    return 0;
}