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
    string S;
    cin >> S;

    if (S[0] == '-') {
        if (S[S.size()-1] > S[S.size()-2]) {
            S.erase(S.size()-1, 1);
            if (S == "-0") cout << "0" << endl;
            else cout << S << endl;
        }
        else {
            S.erase(S.size()-2, 1);
            if (S == "-0") cout << "0" << endl;
            else cout << S << endl;
        }
    } else {
        cout << S << endl;
        return 0;
    }


    return 0;
}