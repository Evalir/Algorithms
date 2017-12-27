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
typedef map<int,int> FREQ;
typedef pair<int, int> ii;
int main(){
    long long N, best = INF*2;
    string S;
    vector<long long> particles;
    cin >> N;
    cin >> S;
    READALL(particles);
    //N^3 solution, should not pass?
    for(int i = 0; i < N; i++) {
        if (S[i] == 'R' && S[i+1] == 'L' && particles[i] < particles[i+1]) {
            best = min(best, (particles[i+1] - particles[i]) / 2);
        }
    }

    if(best < INF*2)cout << best << endl;
    else cout << -1 << endl;
    return 0;
}

//(xi+1 - xi) / 2