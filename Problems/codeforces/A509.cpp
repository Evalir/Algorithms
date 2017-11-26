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
    int el[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            //initialize first line of columns
            if (i == 0) {
                el[i][j] = 1;
            }
            //initialize rows for one
            else if (j == 0) {
                el[i][j] = 1;
            }
            else {
                el[i][j] = el[i-1][j] + el[i][j-1];
            }
        }
     }

    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < N; j++) {
    //         cout << el[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    cout << el[N-1][N-1] << endl;
    return 0;
}