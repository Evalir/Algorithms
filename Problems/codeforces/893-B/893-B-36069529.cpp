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
    int n;
    cin >> n;
    vector<long long> bd;
    long long bestdivisor = 0;
    for(int i = 0; i <= 28; i++) {
        long long num = 1;
        num <<= i+1;
        num--;
        num <<= i;
        bd.pb(num);
    }

    for(int i = 0; i < bd.size(); i++) {
        if (n % bd[i] == 0 && bd[i] > bestdivisor) bestdivisor = bd[i];
    }

    cout << bestdivisor << endl;
    return 0;
}