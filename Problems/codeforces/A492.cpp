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

int N;

int recurseSum(int idx) {
    if (idx == 0) {
        return 0;
    }

    int sum = idx + recurseSum(idx-1);

    return sum;
}
int main(){
    cin >> N;

    if (N == 1){ 
        cout << 1 << endl;
        return 0;
    }

    VI PS;
    VI PS2;
    int acc = 0;
    for(int i = 1; i <= N; i++) {
        acc = recurseSum(i);

        PS.push_back(acc);
    //    cout << acc << " HEY" << endl;
    }

    for (int i = 0; i <= N; i++) {
        if (i != 0) {
        PS2.push_back(PS[i] + PS2[i-1]);   
        }
        else {
        PS2.push_back(1);
        }
    }

    for(int i = 0; i < N; i++) {
        if (PS2[i] > N) {
            cout << i << endl;
            return 0;
        }
    }
   
    int ans = 0;

    return 0;
}