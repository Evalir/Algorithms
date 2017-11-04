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
    int N, M;
    cin >> N >> M;

    VI puzzles;
    int best = INF;
    int rest = best;
    
    for(int i = 0; i < M; i++) {
        int x;
        cin >> x;
        puzzles.push_back(x);
    }

    sort(puzzles.begin(), puzzles.end());
    

    for(int i = 0; i < M; i++) {

        if(puzzles[i] - puzzles[i+(N-1)] < rest && puzzles[i] - puzzles[i+(N-1)] != puzzles[i]) {
            rest = puzzles[i+(N-1)] - puzzles[i];
        }

        if (rest < best) best = rest;

    }

    cout << best << endl;
 
    return 0;
}