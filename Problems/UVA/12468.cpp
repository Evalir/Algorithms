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
    int N, T;
    while(cin >> N >> T && N != -1) {
        if (T - N < 51 && T - N >= 0) {
            cout << T - N << endl;
        }
        else if (T - N < 0 && T - N > -51) {
            cout << abs(T - N) << endl;
        }
        else if (T - N >= 51 && T - N > 0) {
            cout << abs(T - 100 - N) << endl;
        }
        else if (T - N < 0 && T - N <= -51) {
            cout << abs(N - 100 -T) << endl;
        }
    }

    return 0;
}