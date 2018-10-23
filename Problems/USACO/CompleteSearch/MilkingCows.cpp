/*
ID: enrique9
PROG: milk2
LANG: C++
*/
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
#include <cstring>
using namespace std;

bool t[1000010];
int main() {
	memset(t,0,sizeof(t));
	freopen("milk2.in", "r", stdin);
    freopen("milk2.out", "w", stdout);
    int n;
    cin >> n;
    int minst = 1 << 30, mxst = -(1 << 30);
    for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		minst = min(minst, x);
		mxst = max(mxst, y);
		for(int a = x+1; a <= y; a++)
			t[a] = true;
	}
	int ans, anw;
	ans = anw = 0;
	int cur = 0;
	for(int i = minst; i <= mxst; i++) {
		if (t[i]) cur++;
		else {
			ans = max(ans, cur);
			cur = 0;
		}
	}
	ans = max(ans, cur);
	cur = 0;
	bool ok = false;
	for(int i = minst; i <= mxst; i++) {
		if (!t[i] && i != minst) {cur++; ok = true;}
		else {
			anw = max(anw, cur);
			cur = 0;
		}
	}
	anw = max(anw, cur);
	if (!ok) anw = 0;
	cout << ans << ' ' << anw << endl;
	return 0;
}
