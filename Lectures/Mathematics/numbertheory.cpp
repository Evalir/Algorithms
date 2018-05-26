#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;


//get prime factors on vector
vector<int> primeDecomp(int n) {
	vector<int> pf;
	int pfidx = 0, PF = primeStuff[pfidx]; //sieve with primes
	while(PF*PF <= n) {
		while(n % PF == 0) {
			n /= PF;
			pf.push_back(PF);
		}
		PF = primeStuff[++pfidx];
	}
	if (n != 1)
		pf.push_back(PF);
	return pf;
}