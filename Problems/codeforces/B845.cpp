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
	string S;
	cin >> S;
	int s1 = S[0]- '0' + S[1] - '0' + S[2] - '0', s2 = S[3] - '0' + S[4] - '0' + S[5] - '0';
	int repDigit = 0;
	int r = 5;
	if (s1 == s2) {
		cout << 0 << endl;
		return 0;
	}
	//dif is negative, s1 < s2
	if (s1-s2 < 0) {
		int diff = abs(s1 - s2);
		int l = 0;
		while (abs(s1-s2) != 0) {
			if (S[l] == 9 + '0') {
				l++;
				cout << "l++" << endl;
				continue;
			}
			S[l] = 9 + '0';
			s1 = S[0]- '0' + S[1] - '0' + S[2] - '0', s2 = S[3] - '0' + S[4] - '0' + S[5] - '0';
			cout << "Diff is: " << abs(s1-s2) <<  " mit nummer " << s1 << ' '  << s2 << endl;
			repDigit++;
			//cout << "STRING " << S << endl;
			//now s1 is bigger, stop on last el and iterate until find solution
			if (s1-s2 > 0) {
				for(int i = 9; i >= 0; i--) {
					cout << "Iterating on " << l << " with " << i << endl;
					S[l] = i + '0';
					s1 = S[0]- '0' + S[1] - '0' + S[2] - '0', s2 = S[3] - '0' + S[4] - '0' + S[5] - '0';
					//cout << s1-s2 << " on " << l << ' ' << i << " and " << s1 << ' ' << s2 <<  endl;
					if (s1 - s2 == 0) {
						cout << repDigit << endl;
						return 0;
					}
				}
			}
			l++;
		}
		cout << repDigit << endl;
		return 0;
	}
	if (s1-s2 > 0) {
		int diff = abs(s1-s2);
		int r = 5;
		while (abs(s1-s2) != 0) {
			if (S[r] == 9 + '0') {
				r--;
				//cout << "r--" << endl;
				continue;
			}
			S[r] = 9 + '0';
			s1 = S[0]- '0' + S[1] - '0' + S[2] - '0', s2 = S[3] - '0' + S[4] - '0' + S[5] - '0';
			repDigit++;
			if (s1-s2 < 0) {
				for(int i = 9; i >= 0; i--) {
					S[r] = i + '0';
					s1 = S[0]- '0' + S[1] - '0' + S[2] - '0', s2 = S[3] - '0' + S[4] - '0' + S[5] - '0';
					if (s1-s2 == 0) {
						cout << repDigit << endl;
						return 0;
					}
				}
			}
			r--;
		}
		cout << repDigit << endl;
		return 0;
	}
	return 0;
}