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
    long N, X;
    VI encoding;
    cin >> N >> X;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        encoding.push_back(x);
    }

    int ncross = 0;
    long ones = 0;
    long zeros = 0;
    int nofs = 0;

     for (int i = 0; i < N; i++) {
        ones += encoding[i];
        nofs++;
        zeros = nofs - 1;
        //cout << zeros << endl;
        //if ((ones - X) == 0 && encoding.size() != 1) zeros = 1;

        if (ones + zeros == X) {
          //  cout << "THIS RAN" << endl;
            ncross++;
            ones = 0;
            zeros = 0;
            nofs = 0;
        }
     }


    if (ncross == 1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}