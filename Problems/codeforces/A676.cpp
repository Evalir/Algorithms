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
    cin >> N;
    VI el;
    READALL(el);

    int maxv = -1, minv = INF;
    int maxpos = -1, minpos = -1;
    int maxdist = 0;
    for(int i = 0; i < N; i++) {
        if (el[i] > maxv) {
            maxv = el[i];
            maxpos = i;
            }
        if (el[i] < minv) {
            minv = el[i];
            minpos = i;
            }
    } 
    //all on left side
    if (maxpos && minpos <= N/2) {
        maxdist = max(abs(N+1 - (maxpos+1)), abs(N+1 - minpos+1));
        cerr << "HEY1" << endl;
        
        cerr << N+1 - (maxpos+1) << endl;
        cerr << N+1 - (minpos+1) << endl;
    }
    //al on right side
    else if (maxpos && minpos >= N/2) {
        maxdist = max(abs(maxpos+1 - 1), abs(minpos+1 - 1));
        cerr << "HEY2" << endl;
    }
    //left on left, right on ride
    else if (minpos <= N/2 && maxpos > N/2) {
        maxdist = max(abs(N+1 - minpos+1), abs(maxpos+1 - 1));
        cerr << "HEY3" << endl;
    }
    //left on right, right on left
    else if (maxpos <= N / 2 && minpos > N/2) {
        maxdist = max(abs(N+1 - maxpos+1), abs(minpos+1 - 1));
        cerr << "HEY4" << endl;
    }
    cout << maxdist << endl;
    return 0;
}