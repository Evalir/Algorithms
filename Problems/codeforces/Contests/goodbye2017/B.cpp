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
    int counter = 0;
    cin >> N >> M;
    char maze[N][M];
    int x, y;
    int fx, fy;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> maze[i][j];
            if (maze[i][j] == 'S') {
                x = j;
                y = i;
            }
            if (maze[i][j] == 'E') {
                fx = j;
                fy = i;
            }
        }
    }
    string mapping;
    cin >> mapping;

    string mappings = "DLUR";

    do {
        cout << "EX PERM" << endl;
        cout << mappings << endl;
        int dx, dy;
        dx = x;
        dy = y;
        cout << dy << " " << dx << endl;
        for(int i = 0; i < mapping.size(); i++) {
            int command = mapping[i] - '0';
            if (mappings[command] == 'U') dy--;
            else if (mappings[command] == 'R') dx++;
            else if (mappings[command] == 'D') dy++;
            else if (mappings[command] == 'L') dx--;
            //break if bigger than x or y
            if (dx >= M || dx < 0 || dy >= N || dy < 0) {
                break;
            }
            //check for collision
            if (maze[dy][dx] == '#') {
                cout << "FAIL" << endl;
                break;
            }
            //check for E
            if (fx == dx && fy == dy) {
                counter++;
                cout << "HERE" << endl;
                break;
            }

            cout << "ON COORD " << dy << " " << dx << endl;
        }

    } while(next_permutation(mappings.begin(), mappings.end()));

    cout << counter << endl;
    return 0;
}

/*
5 6
.....#
S....#
.#....
.#....
...E..
333300012
*/