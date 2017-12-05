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
    int counterM = 0;
    int counterC = 0;

    int x, y;

    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        if (x > y) counterM++;
        else if (x < y) counterC++;
        else if (x == y) {
            counterM++;
            counterC++;
        }
    }
    if (counterM > counterC) cout << "Mishka" << endl;
    else if (counterM < counterC) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;

    return 0;
}