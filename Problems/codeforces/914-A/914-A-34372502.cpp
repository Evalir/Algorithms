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
    VI PF;
    VI NPF;
    bool found = true;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.pb(x);
    }
    int bg = 0;
    for(int i = 0; i <= 1000; i++) { PF.pb(i*i);}

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < PF.size(); j++) {
            if (PF[j] == el[i]) {
             found = true;
             //cerr << el[i] << " IS PERFECT SQUARE" << endl;
             break;   
             
            }
            else found = false;
        }
        if (found) continue;
        else {
            NPF.pb(el[i]);
        }
    }

    sort(NPF.begin(), NPF.end(), greater<int>());
    cout << NPF[0] << endl;
    return 0;
}