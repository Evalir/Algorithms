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
    set<char> letters;
    getline(cin, S);

    for(int i = 0; i < S.length(); i++) {

        if (S[i] == '{' || S[i] == '}' || S[i] == ',') {
            //cout <<"changed " << S[i] << endl;
            S[i] = ' ';
            
        }
    }


    for(int i = 0; i < S.length(); i++) {
        if (S[i] != ' ') letters.insert(S[i]);
    }


    //cout << S << endl;
    cout << letters.size() << endl;

 
    return 0;
}