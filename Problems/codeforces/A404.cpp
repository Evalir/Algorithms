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
typedef map<char,int> FREQ;

int main(){
    int N;
    cin >> N;
    char dx[N][N];
    FREQ occurr;

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            char x;
            cin >> x;
            dx[i][j] = x;
            occurr[x]++;
        }
    }
    if (occurr.size() > 2 || occurr.size() <= 1) {
        cout << "NO" << endl;
        //cout << "HEY" << endl;
        return 0;
    }
    int biggestfr = 0;
    char rpeat;
    for(auto x : occurr) {
        if (x.second == (N*2)-1) {
            biggestfr = x.second;
            rpeat = x.first;
            }
        else continue;
    }

    if (biggestfr != (N*2)-1) {
        cout << "NO" << endl;
        return 0;
    }

    int l = 0, r = N-1;
    bool YN = true;
    //check until middle
    for(int i = 0; i < (N/2)+1; i++) {
        if (dx[i][l] == dx[i][r] && (dx[i][l] == rpeat) && (dx[i][r] == rpeat)) {}
        else {
            YN = false;
            cerr << dx[i][l] << " " << dx[i][r] << " " << i <<  endl;
            cerr << (dx[i][l] == dx[i][r]) << (dx[i][l] == rpeat) << (dx[i][r] == rpeat) << endl;
            break;
        }
        l++;
        r--;
    }

    cerr << l << " " << r << endl;

    if (YN) {
        for(int i = (N/2)+1; i < (N); i++) {
            if (dx[i][l] == dx[i][r] && (dx[i][l] == rpeat) && (dx[i][r] == rpeat)) {}
            else {
                YN = false;
                cerr << dx[i][l] << " " << dx[i][r] << " " << i <<  endl;
                cerr << (dx[i][l] == dx[i][r]) << (dx[i][l] == rpeat) << (dx[i][r] == rpeat) << endl;
                break;
            }
            l--;
            r++;
        }
    }

    if (YN) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}