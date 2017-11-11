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
#define MAX (int)1e7
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
    long A,B,C;
    cin >> A >> B;
    VI el;
    el.push_back(A);
    el.push_back(B);
    
    sort(el.begin(), el.end());
    long diff = el[1] - el[0];
    C = A - diff;

    cout << C << endl;

    return 0;
}