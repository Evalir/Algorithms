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
   long long int N,K;
   cin >> N >> K;
   
   if(K<=(N+1)/2) {
       long long res = (K*2)-1;
       cout<< res << endl;
       return 0;
   }
   if(K>(N+1)/2) {
       long long res = (K-((N+1)/2))*2;
       cout << res << endl;

   }
    return 0;
}