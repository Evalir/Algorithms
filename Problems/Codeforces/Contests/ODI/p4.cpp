#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;
struct P {
	ll x,y;
	  bool  operator<  ( const P& right ) const {
        if (x != right.x)
           return x < right.x;
        return y < right.y;
     }
};

int main() {
	set<P> rectp;
	ll n,a,b;
	cin >> n >> a >> b;
	for(int i = 0; i < n; i++) {
		P p;
		cin >> p.x >> p.y;
		rectp.insert(p);
	} 
	int ans = 0;
	for(auto p : rectp) {
		P p1a = {p.x-b,p.y-a};
		P p1b = {p.x-a,p.y-b};
		P p2a = {p.x,p.y-a};
		P p2b = {p.x,p.y-b};
		P p3a = {p.x-b, p.y};
		P p3b = {p.x-a, p.y};
		if (rectp.count(p1a) > 0 && rectp.count(p2a) > 0 && rectp.count(p3a) > 0) {
			ans++;
		}
		if (rectp.count(p1b) > 0 && rectp.count(p2b) > 0 && rectp.count(p3b) > 0) {
			ans++;
		}	
	}

	if (a == b)
		cout << ans/2 << endl;
	else
		cout << ans << endl;

	return 0;
}