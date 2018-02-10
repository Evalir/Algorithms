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
typedef map<int,int> FREQ;
int n, m;

int main(){
    cin >> n >> m;
    int graph[n][n];
    vector<bool> cats(n, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n ; j++) {
            graph[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cats[i] = x;
    }

    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        a--; 
        b--;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    // for(int i = 0; i < n; i++) {
    //     if (cats[i] == 0) {
    //         cout << "VERTEX " << i << " HAS NO CATS" << endl;
    //     }
    //     else {
    //         cout << "VERTEX " << i << " HAS A CAT" << endl;
    //     }
    // }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << graph[i][j] << " NODE " << i+1 << ' ' << j+1 << endl;
        }
        cout << endl;
    }


    return 0;
}