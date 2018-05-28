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
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
 bool isPrime(long N) {
     for(int i = 2; i*i < N; i++) {
        if (N % i == 0) return false;
    }
    return true;
 }
int main(){
    long T, N;
    cin >> T >> N;
    int counter = 0;

    for(int i = 1; i <= T; i++) {
        if (N % i == 0 && N/i <= T) counter++;
    }
    

    cout << counter << endl;


}