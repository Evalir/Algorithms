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

bool match(set<int>& A, set<int>& B, int V) {
    if (A.count(V) != 0 && B.count(V) != 0) return true;
    else return false;
}

int main() {
    set<int> Jack;
    set<int> Jill;
    int N,M;
    int counter = 0;
    cin >> N >> M;
    int low;
    int bigger = 0;

    if (N < M) low = N;
    else low = M;

    for(int i = 0; i < N; i++) {
	    int x;
	    cin >>x;
	    if (bigger < x) bigger = x;
	        Jack.insert(x);
     }

    for (int i = 0; i < M; i++) {
	    int y;
	    cin >> y;
	    if (bigger < y) bigger = y;
	        Jill.insert(y);
        }

    for(int i = 0; i < bigger; i++) {
	    if(match(Jack, Jill, i)) counter++;
    }

    cout << counter << " CDs in common" << endl;

}
