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
 
int getNum(int K) {
    return (pow(2, K) - 1) * (pow(2, K-1));
}
int main(){
    int N;
    cin >> N;
    int best = 0;
    for(int i = 1; i <= N; i++) {
        int div =  getNum(i);
        if (N % div == 0) best = div;
    }

    cout << best << endl;
    
    return 0;
}