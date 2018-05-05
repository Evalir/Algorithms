#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#define INF (int)1e9
#define MAX (int)1e7
#define EPS (int)1e-9
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

vector<double> lamps;
int n, l, lpos, hpos;

int main() {
    scanf("%d %d", &n, &l);
    for(int i = 0; i < n; i++) {
        double x;
        scanf("%lf", &x);
        lamps.emplace_back(x);
    }
        
    sort(lamps.begin(), lamps.end());
    double maxdist = 0;
    
    for(int i = 0; i < n-1; i++) {
        if (abs(lamps[i]-lamps[i+1]) > maxdist) {
            lpos = i;
            hpos = i+1;
            maxdist = max(maxdist, abs(lamps[i]-lamps[i+1]));
        }
    }
    double ans = max(maxdist/2.0, max(lamps[0]-0,l-lamps[n-1]));
    printf("%.9f", ans);
    
}
