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
    int a,b,c;
    cin >> a >> b >> c; //dario
    vector<int> vals(a*b*c);
    vector<int> nums(a*b*c);
    for(int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int z = 1; z <= c; z++) {
                vals.pb(i*j*z);
            }
        }
    }
    long long ans = 0;
    long long pew = pow(2,30);
    for (int i = 0; i < vals.size(); i++) {
        int count = 0;
        for(int x = 1; x <= (vals[i]); x++) {
                    if ((vals[i]) % x == 0) count++;
                }
        nums.pb(count);
    }

    for(int i = 0; i < nums.size(); i++) {
        ans+=nums[i];
    }

    cout << ans % (1073741824 * pew) << endl;
    return 0;
}