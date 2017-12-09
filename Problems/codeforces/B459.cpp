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
    int N;
    cin >> N;
    vector<long long> el;
    map<long, int> ways;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }
    sort(el.begin(), el.end());
    for(int i = 0; i < N; i++ ) {
        ways[el[N-1]-el[i]]++;
    }
    int maxDif = 0;
    for(auto x : ways) {
        if (x.first > maxDif) maxDif = x.first;
    }

    cout << maxDif << " " <<ways[maxDif] << endl;
    return 0;
}