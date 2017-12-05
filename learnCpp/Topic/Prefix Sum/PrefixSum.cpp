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
#define INF (int)1e9;
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
    int N;
    vector<int> teibol; //table
    vector<int> PS; //prefix sum
    int acc = 0; //acc for prefix
    cin >> N;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        acc += x; //calculate prefix sum
        PS.push_back(acc); //push prefix sum
        teibol.push_back(x); //push el to table
    }

    //display prefix sum.
    for(int i = 0; i < N; i++) {
        cout << "POS: " << i << " EL: " << teibol[i] << endl;
        cout << "POS: " << i << " SU: " << PS[i] << endl;
    }
    
    return 0;
}