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
    int N;
    cin >> N;
    VI el;
    READALL(el);
    int c1 = 0, c2 = 0;
    bool wp = 0;
    int l = 0;
    int r = N-1;

    while (l <= r) {
        if (!wp) {
            if (el[l] >= el[r]) {
                c1 += el[l];
                el[l] = 0;
                l++;
                wp = 1;
            }
            else {
                c1 += el[r];
                el[r] = 0;
                r--;
                wp = 1; 
            }
        }
        else {
            if (el[l] >= el[r]) {
                c2 += el[l];
                el[l] = 0;
                l++;
                wp = 0;
            }
            else {
                c2 += el[r];
                el[r] = 0;
                r--;
                wp = 0; 
            
        }
        }
    }
    
    cout << c1 << " " << c2 << endl;
    return 0;
}