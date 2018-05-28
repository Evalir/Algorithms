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
    string S;
    cin >> S;
    int countlow = 0;
    int counthigh = 0;

    for(int i = 0; i < S.length(); i++) {
        if (S[i] >= 65 && S[i] <= 90 ) {
            counthigh++;
        } else {
            countlow++;
        }
    }

    if (counthigh == countlow) {
        for(int i = 0; i < S.length(); i++) {
            S[i] = tolower(S[i]);
        }
    }
    else if (counthigh > countlow) {
        for(int i = 0; i < S.length(); i++) {
            S[i] = toupper(S[i]);
        }
    }
    else if (counthigh < countlow) {
        for(int i = 0; i < S.length(); i++) {
            S[i] = tolower(S[i]);
        }
    }
    cout << S << endl;
    return 0;
}