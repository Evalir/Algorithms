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
    int N;
    cin >> N;
    char at = '*';
    char D = 'D';
    int astcount = N-1;
    int Dcount = 1;
    for(int i = 0; i < N/2; i++) {
        for(int j = 0; j < astcount/2; j++) {
            cout << at;
        }
        for(int j = 0; j < Dcount; j++) {
            cout << D;
        }
        for(int j = 0; j < astcount/2; j++) {
            cout << at;
        }
        astcount -= 2;
        Dcount += 2;
        cout << endl;
    }

    //Print only D's
    for(int i = 0; i < Dcount; i++) {
        cout << D;
    }
    cout << endl;
    //Print lower part
    astcount = 2;
    Dcount = N-2;
    for(int i = 0; i < N / 2; i++) {
        for(int j = 0; j < astcount/2; j++) {
            cout << at;
        }
        for(int j = 0; j < Dcount; j++) {
            cout << D;
        }
        for(int j = 0; j < astcount/2; j++) {
            cout << at;
        }
        astcount += 2;
        Dcount -= 2;
        cout << endl;
    }

    return 0;
}