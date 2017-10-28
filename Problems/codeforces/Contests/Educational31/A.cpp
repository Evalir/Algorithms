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
#define MAX (int)1e7;
#define SEC (int)86400;
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
    int N, T;
    cin >> N >> T;

    VI work;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        work.push_back(x);
    }

    int days = 0;
    int freetime = 0;

    for(int i = 0; i < N; i++) {
        freetime += 86400 - work[i];
        days++;

        if(freetime >= T) {
            break;
        }
        
    }

    cout << days << endl;


 
return 0;
}
//FOR LOOP
        // if ((work[i] + T) > 86400) {
        //     days++;
        // }
        // else if((work[i] + T) == 86400) {
        //     days++; 
        //     break;
        // }
        // else if ((work[i] + T) < 86400) {
        //     days++;
        //     break;
        // }
    