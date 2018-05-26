#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

bool isPrime[2000002];
vector<int> primeStuff;

void Sieve() {
	for(int i = 2; i <= 1000000; i++) {
		if(!isPrime[i]) {
			primeStuff.push_back(i);
			for(int j = i + i; j <= 1000000; j += i) {
				isPrime[j] = true;
			}
		}
	}
}

vector<ll> primeFactorization(ll n) {
	vector<ll> pf;
	ll pfidx = 0, PF = primeStuff[pfidx]; //sieve with primes
	while(PF*PF <= n) {
		while(n % PF == 0) {
			n /= PF;
			pf.push_back(PF);
		}
		PF = primeStuff[++pfidx];
	}
	if (n != 1)
		pf.push_back(n);
	return pf;
}

int main() {
	Sieve();
	while(true) {
		ll n;
		cin >> n;
		if (n == 0)
			break;

		vector<ll> ans = primeFactorization(abs(n));
		
		if (n < 0)
			ans.push_back(-1);

		sort(ans.begin(), ans.end());
		cout << n << " = ";
		for(int i = 0; i < ans.size(); i++) {
			if (i != ans.size()-1)
				cout << ans[i] << " x "; 
			else
				cout << ans[i];
		}
		cout << endl;
	}
}