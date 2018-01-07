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
    int N;
    while(cin >> N) {
        bool p1 = 0, p2 = 0, p3 = 0;

        if ((N % 4 == 0 && N % 100 != 0) || (N % 400 == 0)) {
            cout << "This is a leap year." << endl;
            p1 = 1;
        } 
        if (N % 15 == 0) {
            cout << "This is huluculu festival year." << endl;
            p2 = 1;
        }
        if ((N % 4 == 0 && N % 100 != 0 && N % 55 == 0) || (N % 400 == 0 && N % 55 == 0)) {
            cout << "This is bulukulu festival year" << endl;
            p3 = 1;
        }

        if (p1 == 0 && p2 == 0 && p3 == 0) {
            cout << "This is an ordinary year." << endl;
        }

        cout << endl;
    }
    return 0;
}