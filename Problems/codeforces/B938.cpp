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

// int main() {
//     int n;
//     cin >> n;
//     VI prizes;
//     bool isMid = false;
//     int seconds = 0;
//     for(int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         if (x >= 500000) {x = 1000000 - x; isMid = true;}
//         //cout << x << endl;
//         prizes.pb(x);
//     }
//     for(int i = 0; i < n; i++) {
//         seconds = max(seconds, prizes[i]);
//     }
//     if (!isMid)
//         cout << seconds-1 << endl;
//     else
//         cout << seconds << endl;
// }

int main() {
    int n;
    cin >> n;
    VI prizes;
    int l = 0, r = n-1;
    int seconds = 0;
    bool big = 0;
    int lastOne = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 500000) {big = 1; lastOne = 0;}
        else
            lastOne = x;


        prizes.pb(x);
    }
   if (big) {
       while (l <= r) {
           if (prizes[l] > 500000 || prizes[r] > 500000) {
               seconds = max(seconds, max(prizes[l]-1, 1000000-prizes[r]));
               
           }
           else {
               seconds = max(seconds, max(prizes[l]-1, prizes[r]-1));
           }
           l++;
           r--;
       }
    cout << seconds << endl;
   }
   else {
        cout << lastOne-1 << endl;
        return 0;
    }
}