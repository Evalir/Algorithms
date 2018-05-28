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
#include <string>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
 
int main(){
    int N, M;
    VI puzzles;
    int best = INF;
    int diff = 0;
    cin >> N >> M;

    for(int i = 0 ; i < M; i++) {
        int x;
        cin >> x;
        puzzles.push_back(x);
    }
    sort(puzzles.begin(), puzzles.end(), greater<int>());
    // 22 12 10 10 7 5 
    for(int i = 0; i < M; i++) {
            if (puzzles[i] - puzzles[(N-1)+(i)] < best && i+(N-1) < M) {
                best = puzzles[i] - puzzles[(N-1)+(i)];
            }
        
    }

    cout << best << endl;
}