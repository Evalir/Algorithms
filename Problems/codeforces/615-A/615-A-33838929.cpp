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
    int N, M;
    cin >> N >> M;
    vector<bool> bulbs(M+1, false);
    bulbs[0] = true;
    string YES = "YES";
    string NO = "NO";
    bool blighted = 0;

    for(int i = 0; i < N; i++) {
        int B;
        cin >> B;
        if (blighted != 0 ) blighted = 1;
        for(int j = 0; j < B; j++) {
            int x;
            cin >> x;
            bulbs[x] = true;
        }
    }

    for(int i = 0; i <= M; i++) {
        if (bulbs[i] == false) {
            cout << NO << endl;
            return 0;
        }
        else continue;
    }
    if (blighted == 0) cout << YES << endl;
    else cout << NO << endl;
    return 0;
}