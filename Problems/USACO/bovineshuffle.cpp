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
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef map<int,int> FREQ;
typedef pair<int, int> ii;

int main(){
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int N;
    cin >> N;
    VI pos;
    vector<long> cows;
    FREQ poss;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        x--;
        pos.pb(x);
    }

    for(int i = 0; i < N; i++) {
        long x;
        cin >> x;
        cows.pb(x);
    }

    for(int i = 0; i < N; i++) {
        poss[pos[i]] = cows[i];
    }

    VI newcows(N, 0);

    for(int i = 0; i < N; i++) {
        newcows[i] = poss[i]; 
    }

    for(int i = 0; i < N; i++) {
        cout << newcows[i] << endl;
    }
    return 0;
}