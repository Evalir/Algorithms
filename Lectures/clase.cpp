#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
using namespace std;
bool isPrime[2000002];
set<int> tPrimes;
//klk joa
void Sieve() {
	for(int i = 2; i <= 1000000; i++) {
		if(!isPrime[i]) {
			if (i % 5 == 1)
				tPrimes.insert(i);
			for(int j = i + i; j <= 1000000; j += i) {
				isPrime[j] = true;
			}
		}
	}
}
int main() {
	
    return 0;
}
