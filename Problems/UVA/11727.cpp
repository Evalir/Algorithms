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
    int N;
    cin >> N;
    int counter = 0;

    for(int i = 0; i < N; i++) {
        VI sal;
        counter++;
        int x, y, z;
        cin >> x >> y >> z;
        sal.push_back(x);
        sal.push_back(y);
        sal.push_back(z);
        sort(sal.begin(), sal.end());
        cout << "Case " << counter <<": "<< sal[1] << endl;
    }

    return 0;
}