#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
set<long long> qprime;
 
void SieveOfEratosthenes(unsigned long long n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (unsigned long long p=2; p*p<=n+1000; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
        	qprime.insert(p*p);
        	cerr << "pb " << p*p <<  endl;
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}
 
// driver  program to test above function
int main()
{
    int n;
    cin >> n;
    vector<long long> el;
    for(int i  = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	el.push_back(x);
    }
    SieveOfEratosthenes(1000000);

    for(int i = 0; i < n; i++) {
    	if (qprime.count(el[i]) >= 1)
    		cout << "YES" << endl;
    	else
    		cout << "NO" << endl;
    }
 
    
   
    return 0;
}