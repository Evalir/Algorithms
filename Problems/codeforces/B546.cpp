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
    VI badges;
    VI freq(N+10, 0);
    int coins = 0;
    for(int i = 0; i < N; i++) {
        int x;
        cin >>x;
        badges.pb(x);
        freq[x]++;
    }

    sort(all(badges));

    for(int i = 0; i < N; i++) {
        if (freq[badges[i]] > 1) {
            cout << freq[badges[i]] << endl;
            for(int j = 1; j < N*N; j++) {
                if (freq[j] == 0) {
                    badges[i] += j-badges[i];
                    cout << "BADGE IS NOW " << badges[i] << endl;
                    freq[badges[i]]--;
                    freq[j]++;
                    coins += j-badges[i];
                    break;
                }
            }
        }
    }
    cout << coins << endl;
    return 0;
}