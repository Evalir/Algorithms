#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> generatePrimes(int N) {
    vector<bool> nums(N, 1);
    nums[0] = 0;
    vector<int> primes;
    //sieve
    for(int i = 2; i*i <= N; i++) {
        if (nums[i]) {
            for(int j = i*2; j <= N; j += i) //start from next number (i is prime) and up to N
                nums[j] = 0; //not prime
        }            
    } 
    for(int i = 0; i <= N; i++) {
        if (nums[i] != 0) primes.push_back(i);
    }
    return primes;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> primes = generatePrimes(100);

    for(int i = 0; i < primes.size(); i++) {
        if (primes[i] == n && primes[i+1] == m) {
            cout << "YES" << endl;
            return 0;
        }
        else continue;
    }

    cout << "NO" << endl;
}