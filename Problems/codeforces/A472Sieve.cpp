//Harder solution utilizing sieve of eratosthenes for calculation
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#define INF (int)1e9;
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

vector<int> SievePrimes(int n) {
    
        bool prime[n+1];
        VI primes;
        memset(prime, true, sizeof(prime));
    
        for(int p = 2; p*p <= n; p++) { //loop only runs until the square root of n, there for this loop is sqrt(N)
            if (prime[p] == true) {
                for(int i= p*2; i <= n; i += p) {
                    prime[i] = false;
                }
            }
        }
    
        for(int i = 2; i < n; i++) {
            if (prime[i] == true) primes.push_back(i);
        }
    
        return primes;
    }

int main() {
    int N;
    cin >> N;
    VI composites = SievePrimes(N);
    
}