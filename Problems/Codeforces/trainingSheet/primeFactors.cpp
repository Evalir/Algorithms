#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;
typedef long long ll;
bool isPrime[2000002];
vector<int> primeStuff;
void Sieve() {
	for(int i = 2; i <= 10000000; i++) {
		if(!isPrime[i]) {
			primeStuff.push_back(i);
			for(int j = i + i; j <= 10000000; j += i) {
				isPrime[j] = true;
			}
		}
	}
}

map<int,int> primeFactorization(int n) {
	map<int,int> pf;
	int pfidx = 0, PF = primeStuff[pfidx];
	while(PF*PF <= n) {
		while(n % PF == 0) {
			n /= PF;
			pf[PF]++;
		}
		PF = primeStuff[++pfidx];
	}
	if (n != 1)
		pf[n]++;
	return pf;
}

int main() {
	int n;
	cin >> n;
	Sieve();
	map<int,int> p = primeFactorization(n);
	int cnt = 0;
	for(auto x : p) {
		cout << "(" << x.first << '^' << x.second << ')';
		cnt++;
		if (cnt != p.size())
			cout << '*';
	}
	cout << endl;
	return 0;
}