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
    int p, n;
    cin >> p >> n;
    int lowestBranch = n;
    bool bigDiv = false;
    while (bigDiv == false) {
        for(int i = 2; i <= p; i++) {
            //cout << "on for loop with i: " << i << endl;
            if (lowestBranch % i == 0) break;
            if (i == p && lowestBranch % i != 0) bigDiv = true;
        }
        if (bigDiv == true) break;
        lowestBranch--;
        //cout << "currBranch " << lowestBranch << endl;
        if (lowestBranch == 1) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << lowestBranch << endl;
    return 0;
}