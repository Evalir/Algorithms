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
    FREQ st;
    int lowfr = 10;
    bool haslegs = 0;
    for(int i = 0; i < 6; i++) {
        int x;
        cin >> x;
        st[x]++;
    }

    for(auto x : st) {
        lowfr = min(lowfr, x.second);
        if (x.second == 4) haslegs = 1;
    }

    if (st.size() == 1 || (st.size() == 2 && lowfr == 2)) cout << "Elephant" << endl;
    else if ((st.size() == 3 && haslegs == 1) || (st.size() == 2 && lowfr == 1)) cout << "Bear" << endl;
    else cout << "Alien" << endl;
    
    return 0;
}