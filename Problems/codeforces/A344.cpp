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
    int counter = 1;
    cin >> N;
    vector<string> magnets;

    for(int i = 0; i < N; i++) {
        string s;
        cin >> s;
        magnets.push_back(s);
    }

    for(int i = 0; i < N - 1; i++) {
        if (magnets[i] != magnets[i+1]) {
            counter++;
        } 
    }

    cout << counter << endl;
 
return 0;
}
