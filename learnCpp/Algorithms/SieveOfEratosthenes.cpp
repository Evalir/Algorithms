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
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
#define INF (int)1e9;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime)); //sets all indexes of prime[] to true. (sizeof says "all of em")

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p){
                prime[i] = false;
            		cout << "I is gone: " << i << endl; //See which ones are deleted
            }
        }
    }

    // Print all prime numbers (Should be removed in a contest)
    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";
}
//TODO; implement way to create an array of prime elements with sieve of Eratosthenes.

int main() {
	int N;
	cin >> N;
	SieveOfEratosthenes(N);

	return 0;

}
