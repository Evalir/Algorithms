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
    int N;
    cin >> N;
    vector<long long> el;
    for(int i = 0; i < N; i++) {long long x; cin >> x; el.pb(x);}
    int best = 0;
    int counter = 0;

    for(int i = 0; i < N-1; i++) {
        if (el[i] < el[i+1]) {
            counter++;
            best = max(best, counter);
        }
        else {
            best = max(best, counter);
            counter = 0;
        }
    }
    cout << best+1 << endl;
    return 0;
}