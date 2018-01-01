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
    int N, X;
    cin >> N >> X;
    int total = 0;
    for(int i = 0; i < N; i++) { int x; cin >> x; total += x;}

    total = abs(total);
    int counter = 0;
    if (total % X == 0) {
        cout << abs(total / X) << endl;
        return 0;
    }
    else {
        while(total - X > 0) {
            total -= X;
            counter++;
        }
        //generar divisores de total
        priority_queue<int> q;
        for(int i = 1; i <= total; i++) {
            if (total % i == 0) {
                q.push(i);
            }
            else continue;
        }

        counter += (total/q.top());
        cout << counter << endl;
    }

    return 0;
}