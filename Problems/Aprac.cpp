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
    int N;
    string S;
    set<char> letters;
    while(cin >> S) {
        for(int i = 0; i < S.length(); i++) {
            letters.insert(S[i]);
        }
    }

    if (letters.size() == 26) cout << "Y" << endl;
    else cout << "N" << endl;

 
    return 0;
}