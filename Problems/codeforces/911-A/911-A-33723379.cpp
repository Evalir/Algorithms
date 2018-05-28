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
#define INF (int)1e9+99
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
    vector<long long> el;
    READALL(el);
    long long minv = 2*INF+10;
    int dist = INF-10000;
    for(int i = 0; i < N; i++) {
        if (el[i] <= minv) minv = el[i];
        else continue;
    }
    for(int i = 0; i < N; i++) {
        if (el[i] == minv) {
            for(int j = i+1; j < N; j++) {
                if (el[j] == minv && j != i) {
                    dist = min(dist, j - i);
                    break;
                }
            }
        }
    }

    cout << dist << endl;
    return 0;
}