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
    int T;
    cin >> T;
    while (T--) {
        int N, K, S;
        cin >> N >> K >> S;
        int ans = 0;
        int currentch = 0;
        bool csur = 1;

        for(int i = 1; i <= S; i++) {
            if (i == 7 || i % 7 == 0) {
                cout << "NOW " << currentch << endl;
                currentch -= K;
            }
            if (currentch < 0) {
                cout << -1 << endl;
                csur = 1;
                break;
            }
            else {
                csur = 0;
                if (currentch - K < 0 || ((i+1 % 7 == 0))) {
                    currentch += N;
                    ans++;
                }

                currentch -= K;
            }
        }

    if (csur == 0) cout << ans << endl;
    }
    return 0;
}