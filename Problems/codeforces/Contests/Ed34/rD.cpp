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
    VI el;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.pb(x);
    }
    int sum = 0;
    //calculate pair
    for(int l = 0; l < el.size(); l++){
        for(int r = l + 1; r < el.size(); r++) {
            //case 1
            if (abs(l - r) > 1) {
                sum += r - l;
                cout << "SUM IS" << r - l << " ON x y "<<l << " " << r << endl;
            }
            else if (abs(l - r) <= 1) {
                sum += 0;
                cout << "SUM IS" << 0 << endl;
            }
        }
    }
    cout << sum << endl;
}