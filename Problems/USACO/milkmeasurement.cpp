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
    // UNCOMMENT to SUBMIT
    // freopen("measurement.in", "r", stdin);
    // freopen("measurement.out", "w", stdout);
    int N;
    cin >> N;
    map<int, pair<string, int> > cows;

    for(int i = 0; i < N; i++) {
        int x, dy;
        string S;
        cin >> x >> S >> dy;
        pair<string, int> P = make_pair(S, dy);
        cows[x] = P;
    }

    int pilaHigh = 7;
    bool tH = 0;
    int count = 0;
    map<string, int> currCow;
    currCow["Bessie"] = 7;
    currCow["Mildred"] = 7;
    currCow["Elsie"] = 7;
    for(auto x : cows) {
        currCow[x.second.first] += x.second.second;
        int currHigh = 7;
        tH = 0;
        for(auto x : cows) {
            if (currCow[x.second.first] > pilaHigh) {
                count++;
                pilaHigh = currCow[x.second.first];
                cout << "HIGH IS " << x.second.first << endl;
                tH = 1;
            }
        }

        // if (tH == 0) {
        //     count++;
        //     for(auto x : cows) {
        //         pilaHigh = max(pilaHigh, currCow[x.second.first]);
        //         cout << "NEW H IS " << x.second.first << endl;
        //     }
        // }
    }
    cout << count << endl;
    return 0;
}