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
 
int joa(int crateCount, int maxCapacity) {
    int counter = 0;
    int mid1, mid2;

    if (crateCount <= maxCapacity) {
        return 1;
    }

    if(crateCount % 2 == 0) {
        mid1 = joa(crateCount/2, maxCapacity);
        mid2 = joa(crateCount/2, maxCapacity);
    }
    else {
        mid1 = joa(crateCount/2, maxCapacity);
        mid2 = joa(crateCount/2 + 1, maxCapacity);
    }
    counter += mid1 + mid2;

    return counter;
}

int main(){
    int N, L;
    while(cin >> N >> L) {
        int count = joa(N, L);
        cout << count << endl;
    }
    
    return 0;
}