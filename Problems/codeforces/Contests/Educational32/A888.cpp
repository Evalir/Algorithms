//problem A888 codeforces
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
#define MAX (int)1e7
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
    int N, K;
    int counter = 0;
    cin >> N;
    VI el;

    for(int i = 0; i < N; i++) {
        cin >> K;
        el.push_back(K);
    }

    for(int i = 1; i < N - 1; i++) {

        if (el[i] < el[i-1] && el[i] < el[i+1]) {
            counter++;
        }
        
        if (el[i] > el[i-1] && el[i] > el[i+1]) {
            counter++;
        }

    }

    cout << counter << endl;
 
    return 0;
}