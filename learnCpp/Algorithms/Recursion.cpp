#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
typedef long long llong;
typedef vector<int> VI;
typedef vector<VI> VII;
using namespace std;

/*Recursive function to calculate factorial*/
int fact(int n) {

  if (n == 0) return 1; //base case

  return n * fact(n - 1); //actual recursion
}

int fib(int n) {

  if (n == 0) return 1;
  if (n == 1) return 1;

  return fib(n - 1) + fib(n - 2);
}

int main() {

	int N = 40;
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
