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
 
 
int main(){
    int N;
    cin >> N;
    int officers = 0;
    int untreatable = 0;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;

        if (x == -1) {
            untreatable--;
            if (officers != 0) {
                untreatable++;
                officers--;
            }
        }
        else {
            officers += x;
        }

    }

    cout << abs(untreatable) << endl;

    return 0;
}