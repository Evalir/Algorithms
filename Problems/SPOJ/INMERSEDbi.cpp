#include <iostream>
#include <cstdio>
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

double P, C;
double evaluate(double N) {
    return N*(pow(N, C*N));
}

bool check(double N) {
    double evaluation = evaluate(N);
    cerr << "F(X) IS: " << evaluation << endl;
    if (evaluation < P) return false;
    else return true;
}

void bisection(double lo, double hi, double target) {
    double c = lo;
    for (int i = 0; i <= 80; i++) {
        // Find middle point
        c = (lo + (lo-hi)) / 2;
        // Check if middle point is root
        if (evaluate(c) == P || (hi-lo)/2 < 1.0e-7) {
            cout << "The value of root is : ";
            printf("%.08f", c);
        }
        // Decide the side to repeat the steps
        else if (evaluate(c)*evaluate(lo) < 0)
            hi = c;
        else
            lo = c;
    }
}

int main(){
    int T;
    cin >> T;
    while (T--) {
        cin >> P >> C;
        //double ans = binary_search_simple(0.1, 10);
        bisection(0.01, 10.0, P);
        //printf("%.06f", ans);
    }
}