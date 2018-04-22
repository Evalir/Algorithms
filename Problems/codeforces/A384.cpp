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
    int counter = 0;
    cin >> n;
    char mat[n][n];
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = '.';
        }
    }

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j != 0) {
                if (mat[i][j+1] != 'C' && mat[i][j-1] != 'C' && mat[i+1][j] != 'C' && mat[i-1][j] != 'C') {
                    mat[i][j] = 'C';
                    counter++;
                }
            }
            else {
                if (mat[i][j+1] != 'C' && mat[i][j-1] != 'C' && mat[i+1][j] != 'C') {
                    mat[i][j] = 'C';
                    counter++;
                }
            }
        }
    }
    cout << counter << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j];
        }
        cout << endl;
    }

    return 0;
}