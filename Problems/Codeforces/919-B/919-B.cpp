#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;/
vector<ll> preCompute() {
	vector<ll> V;
	for(int i = 19; i <= 15000000; i++)	{
		ll n = i;
		int cnt = 0;
		while(n > 0) {
			cnt += n % 10;
			n /= 10;
			if (cnt > 10)
				break;
		}
		if (cnt == 10)
			V.push_back(i);
	}
	return V;
}

int main() {
	vector<ll> V = preCompute();
	//cerr << V.size() << endl;
	int n;
	cin >> n;
	--n;
	cout << V[n] << endl;
	return 0;
}