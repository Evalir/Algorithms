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
    int N, M;
    int WB = 0;
    int Col = 0;
    cin >> N >> M;
    char el[N][M];

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            char let;
            cin >> let;
            el[i][j] = let;
        }
    }

    // for(int i = 0; i < N; i++) {
    //     for (int j = 0; j < M; j++) {
    //         cout << "el[" << i << "]" << "[" << j << "]" << endl;
    //     }
    // }

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if(el[i][j] == 'W' || el[i][j] == 'B' || el[i][j] == 'G') WB++;
            else Col++;
        }
    }

    if (Col > 0) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;

    return 0;
}