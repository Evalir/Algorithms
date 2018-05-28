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
    int n, a, b, c;
    int best = 0;
    cin >> n >> a >> b >> c;

    //N^2 brute force solution by wave
    for(int cnta =0; cnta * a <= n; cnta++) {
        for(int cntb = 0; cntb * b +  cnta * a <= n; cntb++) {
            int rem = n - cnta*a - cntb*b;
            if (rem % c == 0){
                int cntc = rem / c;
                if (cnta+cntb + cntc > best)
                    best = cnta + cntb + cntc;
            }
        }
    }

    cout << best << endl;
}