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
    int N, M;
    cin >> N >> M;
    char past[N][M];

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> past[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            //cout no and return, invalid solution
            if ((past[i][j] == 'S' && past[i][j+1] == 'W' && j != M-1) || (past[i][j] == 'S' && past[i][j-1] == 'W' && j != 0) || 
                (past[i][j] == 'S' && past[i+1][j] == 'W' && i != N-1) || (past[i][j] == 'S' && past[i-1][j] == 'W' && i != 0)) {
                    cout << "No" << endl;
                    return 0;
                }
            if (past[i][j] == '.') {
                past[i][j] = 'D';
            }
        }
    }

    cout << "Yes" << endl; 

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << past[i][j];
        }
        cout << endl;
    }

    return 0;
}