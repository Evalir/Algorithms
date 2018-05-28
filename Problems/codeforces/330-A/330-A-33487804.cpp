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
    int r, c;
    cin >> r >> c;
    char cake[r][c];
    int counter = 0;

    for(int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> cake[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        bool hasbad = 0;
        for(int j = 0; j < c; j++) {
            if (cake[i][j] == 'S') {
                //cout << "JUMPING LINE HAS BAD" << endl;
                hasbad = 1;
                break;
            }
            else {
                hasbad = 0;
            }
        }
        if (hasbad == 0) {
            for(int j = 0; j < c; j++) {
                if (cake[i][j] == '.') {
                    cake[i][j] = 'N';
                    counter++;
                }
                else continue;
            }
        }
    }

    for(int j = 0; j < c; j++) {
        bool hasbad = 0;
        for(int i = 0; i < r; i++) {
            if (cake[i][j] == 'S') {
                hasbad = 1;
                //cout << "JUMPING LINE HAS BAD" << endl;
                break;
            }
            else {
                hasbad = 0;
            }
        }
        if (hasbad == 0) {
            for(int i = 0; i < r; i++) {
                if (cake[i][j] == '.') {
                    cake[i][j] = 'N';
                    counter++;
                }
                else continue;
            }
        }
    }

    cout << counter << endl;
    return 0;
}

/*
3 4
S...
....
..S.
*/