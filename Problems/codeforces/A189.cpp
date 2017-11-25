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
 
int counter = 0;
int joa(int ribbonSize, int a, int b, int c) {
    counter++;
    if(ribbonSize == a || ribbonSize == b || ribbonSize == c) {
        return 1;
    }

    if (ribbonSize % 2 == 0 ) {
        int mid1 = joa(ribbonSize/2, a, b, c);
        int mid2 = joa(ribbonSize/2, a, b, c);
    }
    else {
        int mid1 = joa(ribbonSize/2 +1, a, b, c);
        int mid2 = joa(ribbonSize/2, a, b, c);
    }

    


// }
int main(){
    int N, A, B, C;
    cin >> N >> A >> B >> C;
    int counter = 0;
    int mid1 = 0;
    int mid2 = 0;

    cout << counter << endl;

}