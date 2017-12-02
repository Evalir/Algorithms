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
#include <string>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
 
int main(){

    float N, K;
    cin >> N >> K;
    float acc = 0;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        acc += x;
    }

    int counter = 0;
    float sum = 0;
    // cout << acc << endl;
    // cout << sum << endl;
    // cout << N << endl;
    while(((acc+sum) / (N+counter)) < K - 0.5) {
        sum += K;
        counter++;
        // cout << "FORMULA " << ((acc+sum) / (N+counter)) << endl;
    }

    cout << counter <<  endl;
    return 0;
}