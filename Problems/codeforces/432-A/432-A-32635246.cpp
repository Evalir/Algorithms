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
    int N, K;
    cin >> N >> K;
    int capacity = 5 - K;
    VI el;
    int counter = 0;
    int acc = 0;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }

    sort(el.begin(), el.end());

    for(int i = 0; i < N; i++) {
        if (el[i] <= capacity) counter++;
        if (counter == 3) {
            acc++;
            counter = 0;
        }
    }

    cout << acc << endl;

}