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
    int nZero = 0;
    int nOne = 0;
    int result = 0;
    string S;

    cin >> S;

    for(int i = 0; i < S.length(); i++) {
        if (S[i] == '1') nOne++;
        else nZero++;
    }

    if (nOne > nZero) {
        result = S.length() - (nZero*2);
    }
    else result = S.length() - (nOne*2);

    cout << result << endl;

}