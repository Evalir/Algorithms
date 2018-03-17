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
	string acc;
	cin >> acc;
	
	if (acc[0] != '-') {
		cout << acc << endl;
		return 0;
	}
	else if (acc[0] == '-') {
		char ld = acc.back();
		acc.pop_back();
		char ld2 = acc.back();
		acc.pop_back();
		acc.push_back(min(ld, ld2));
		//cerr << min(ld, ld2) << endl;
		if (acc[0] == '-' && acc[1] == '0')acc.erase(0,1);
		cout << acc << endl;
		return 0;
	}

}
