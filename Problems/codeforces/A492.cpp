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
 
int counter = 0;
int recurseSum(int idx) {
    counter++;
    if (idx == 0) return 1;

    return idx - recurseSum(idx-1);
}
 
int main(){
    int N;
    cin >> N;
    VI cubes;
    int sum = 0;
    //int x = recurseSum(25);
    for(int i = 1; sum < N; i++) {
        sum += i;
        cubes.push_back(i);
    }
        //cout << x << endl;
    //cout  << counter << endl;
    cout << sum << endl;
    cout << cubes.size() << endl;
    return 0;
}