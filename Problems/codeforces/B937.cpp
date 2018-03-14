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
    int p, n;
    cin >> p >> n;
	bool isPrime = false;
	if (n > 300 && p > 300) {
    for(int k = n-1; k >= n-1-300; k-= 2) {
		//cerr << "Trying with " << k << endl;
		if (k <= p) {
			cout << -1 << endl;
			return 0;
		}
		for(int i = 2; i*i <= p; i++) {
			//cout << "dividing " << k << " by " << i << endl;
			if (k % i == 0) {
				//cerr << i << " divides " << k << endl;
				isPrime = false;
				break;
			}
			isPrime = true;
		}
		if (isPrime) {
			cout << k << endl;
			return 0;
		}
		if (k == n-1-300) {
			cout << -1 << endl;
			return 0;
		}
	}
	}
	else {
		for(int k = n; k >= p; k--) {
			if (k == p) {
				cout << -1 << endl;
				return 0;
			}
			for(int i = 2; i <= p; i++) {
				if (k % i == 0) {
					isPrime = false;
					break;
				}
				isPrime = true;
			}

			if (isPrime) {
				cout << k << endl;
				return 0;
			}
		}
		
	}
    return 0;
}