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
    vector<char> groups;
    for(int i = 0; i < N; i++) {
        char C;
        cin >> C;
        groups.push_back(C);
    }

    int counter = 0;

    for(int i = 0; i < N-1; i++) {
        if (groups[i] != groups[i+1]) counter++;
    }

    cout << counter+2 << endl;

}