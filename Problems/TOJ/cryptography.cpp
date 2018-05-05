#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

vector<bool> isPrime(2000002,0);
vector<int> primes;
void Sieve() {
    isPrime[1] = 1;
    primes.push_back(1);
	for(int i = 2; i <= 2000000; i++) {
		if(!isPrime[i]) {
            primes.push_back(i);
			for(int j = i + i; j <= 2000000; j += i) {
				isPrime[j] = true;
			}
		}
	}
}

int main() {
    Sieve();
    int n;
    scanf("%d", &n);
    while(n--) {
        int q;
        scanf("%d", &q);
        printf("%d\n", primes[q]);
    }
}
