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
 
 bool isPrime(int N) {
     for(int i = 2; i*i < N; i++) {
        if (N % i == 0) return false;
    }
    return true;
 }
int main(){
    long T, N;
    cin >> T >> N;
    int counter = 0;
    if (isPrime(N)) {
        cout << 0 << endl;
        cout << "IS PRIME" << endl;
        return 0;
    }
    else {
    if (N % 2 != 0 && !isPrime(N)){
        for(int i = 1; i <= T; i++) {
            if (N % i == 0) {
                counter++;
                //cout << N << " AND " << i << " DIVISIBLE" << endl;
            }
        // else if (N % i == 1) {
        //     if (i == 5) counter++;
        //     //cout << N << " AND " << i << " DIVISIBLE" << endl;
        // }
        }
    }
    else {
        for(int i = 1; i <= T; i++) {
            if (N % i == 0 && i != 1) {
                counter++;
                //cout << N << " AND " << i << " DIVISIBLE" << endl;
            }
        }
    } 
} 

    cout << counter << endl;


}