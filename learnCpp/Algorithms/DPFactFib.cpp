#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
typedef long long llong;
typedef vector<int> VI;
typedef vector<VI> VII;

int N;
int memF[10000];
unsigned int fact(int n) {

	if (n == 0 || n == 1) return 1;
	if (memF[n] > 1) return memF[n];


	memF[n] = n * fact(n - 1);

	return memF[n];
}

int memFib[10000];
unsigned int fib(int n) {

	if (n == 0) return 1;
	if (n == 1) return 1;
	if (n <= 1) return n;

	if (memFib[n] > 0) return memFib[n];

	memFib[n] = fib(n-1) + fib(n-2);

	return memFib[n];
}

int main() {
	N = 40;
	VI facts;
	VI fibs;

	for(int i = 0; i < N; i++) {
		facts.push_back(fact(i));
		fibs.push_back(fib(i));
	}

	for(int x : facts) {
		cout << x << " IN FACT ARRAY " <<endl;
	}

	for(int x : fibs) {
			cout << x << " IN FIB ARRAY " <<endl;
	}

	return 0;
}
