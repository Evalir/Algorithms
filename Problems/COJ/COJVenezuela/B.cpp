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
#include <iomanip>
#include <math.h>
#define INF (int)1e9;
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
    int N;
    cin >> N;
    int weeks[1000];
    int fw = 1;
    weeks[0] = fw;
    for(int i = 1 ; i < 1000; i++) {
        fw += 3;
        weeks[i] = fw;
    }

    for(int i = 0; i < N; i++) {
       long long index;
       cin >> index;
       index -= 2;
       long long rab1,rab2;
       cin >> rab1 >> rab2;

       int factor = 1;
        for(int j = 0; j < index; j++) {
            factor = (rab1 * rab2) % 1000000;
            rab1 = rab2;
            rab2 = factor;
       }

       cout << "At week " << weeks[index+1] << " we obtain " << factor << " new rabbits." << endl;
    }
 
    return 0;
}