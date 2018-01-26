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
    int N, K, S, T;
    cin >> T;

    while (T--) {
        cin >> N >> K >> S;
        //total chocolates to eat to survive
        int totChoco = K * S; 
        //total chocolates we can buy
        int buyChoco = (N)*(S-(S/7));

        if (totChoco > buyChoco || ((N-K)*6 < K && S >= 7)) {
            cout << -1 << endl;
        }
        else {
            if (ceil(totChoco%N) != 0) {
                cout << (ceil(totChoco/N))+1 << endl;
            }
            else {
                cout << (ceil(totChoco/N)) << endl;
            }
        }
    }

    return 0;
}