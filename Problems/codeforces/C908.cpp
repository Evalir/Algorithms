#include <cstdio>
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
    int n, r;
    scanf("%d %d", &n, &r);
    VI disks(n, 0);
    vector<double> bdistances;

    for(int i = 0; i < n; i++) {
        scanf("%d", &disks[i]);
        double best = r; //if disk does not intercept best distance will be dist from ground to radius

        for(int j = 0; j < i; j++) {
            if (abs(disks[j]-disks[i]) <= 2*r) {
                double dx = abs(disks[j]-disks[i]);
                double ftrsq = 4*(r*r);
                double ans = bdistances[j] + sqrt(ftrsq - dx*dx);
                best = max(best, ans);
            }
        }
        bdistances.pb(best);
    }

    for(auto x : bdistances) {
        printf("%0.10lf ", x);
    }

    printf("\n");

    return 0;
}