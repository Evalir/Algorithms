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
    int best = 1;
    for(int i = 0; ; i++) {
        int p = (1 << (i+1)) - 1;
        int x = p << i;
        if (N % x == 0) {
            if (best < x) {
                best = x;
            }
        }

        if (x > 100000) {
            break;
        }

    }

    cout << best << endl;

    return 0;
}

/*
    left shift operator: adds k zeros to the right to the number we do the left shift on. example: 1111 << 3 -> 1111000.
    This is useful in binary because we can convert such a number into an even number. If we do -1 then we reduce the number
    by one, it becomes uneven. 
    In this case we're using the left shift operator to create a "beautiful" divisor: one composed of k+1 '1's and k '0's.
    1st we do the left shift on the 1, using the i as a k, and we subtract one to get the 1s. Then, we do another left shift
    on that number, again using i as k. This gets a beautiful divisor guaranteed. 
*/