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

struct client {
    int h, m;
};
int main(){
    int N;
    cin >> N;
    vector<client> clients;
    int cash = 1;
    int ans = 1;
    for(int i = 0; i < N; i++) {
        client c;
        cin >> c.h >> c.m;
        clients.pb(c);
    }

    for(int i = 0; i < N-1; i++) {
        if (clients[i].h == clients[i+1].h && clients[i].m == clients[i+1].m) {
            cash++;
            ans = max(ans, cash);
        }
        else {
            cash = 1;
            ans = max(ans, cash);
        }
    }

    cout << ans << endl;
    return 0;
}