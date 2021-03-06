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

//recursive type of function
//assume that a and b cannot both be 0
int GCD(int a, int b)
{
   if (b==0) return a;
   cout << b << " " << a%b << endl;
   return GCD(b,a%b);
}

int main() {

    cout << GCD(12, 24) << endl;
    return 0;
}