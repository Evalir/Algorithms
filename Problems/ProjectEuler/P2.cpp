#include <iostream>
#include <vector>
using namespace std;

unsigned long long sum = 0;
unsigned long long memFib[100000000];
unsigned long long fib(long n) {

	if (n == 0) return 0;
	if (n == 1) return 1;
	if (memFib[n] > 0) return memFib[n];
    memFib[n] = fib(n-1) + fib(n-2);

    if (n % 2 == 0) sum += memFib[n];
	return memFib[n];
}

int main() {
    //33 does not exceed four million
    cout << fib(10) << endl; 

    cout << sum << endl;
}