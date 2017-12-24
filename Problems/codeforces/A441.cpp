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
    int N, money;
    cin >> N >> money;
    VI ans;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        bool islower = 0;
        int minima = INF;
        for(int j = 0; j < x; j++) {
           int z;
           cin >> z;
           if (money > z && !islower) {
               ans.pb(i+1);
               islower = 1;
               }
        }
        
    }
    sort(all(ans));
    cout << ans.size() << endl;
    if(ans.size() != 0) 
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
}