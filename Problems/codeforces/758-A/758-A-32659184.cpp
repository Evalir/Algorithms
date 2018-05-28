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
    int big = -1;
    int count = 0;
    VI citizens;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x > big) big = x;
        citizens.push_back(x);
    }

    for(int i = 0; i < N; i++) {
        if (citizens[i] < big) count += big - citizens[i];
    }

    cout << count << endl;
    return 0;
}