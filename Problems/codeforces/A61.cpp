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
    string N, K;
    cin >> N >> K;
    string Nstring = "";
    for(int i = 0; i < N.length(); i++) {

        //check if nums are equal;
        if(N[i] == K[i]) {
            Nstring += '0';
        }
        else if (N[i] != K[i]) {
            Nstring += '1';
        }
    }

    cout << Nstring << endl;
 
    return 0;
}