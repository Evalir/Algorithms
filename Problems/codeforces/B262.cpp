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

int main() {
    int N, K;
    cin >> N >> K;
    VI el;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.pb(x);
    }

    for(int i = 0; i < K; i++) {
        if (i > K) i = 0;
        if (el[i] < 0) el[i] *= -1;
        
    }
    int counter = 0;
    for(int i = 0; i < N; i++) {
        counter += el[i];
    }

    cout << counter << endl;
    
    return 0;
}