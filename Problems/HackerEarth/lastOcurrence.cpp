//Hackerearth problem last ocurrence

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
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {

    int a;
    scanf("%d", &a);
    vector<int> table(1000007, -1);
    vector<int> arr;

    //get values into arr and intialize table
    for(int i = 0; i < a; i++) {
      int ai;
      scanf("%d", &ai);
      arr.push_back(ai);
      table[ai] = i+1;
    }

    //read n of queries and process
    int q;
    scanf("%d", &q);
    for(int i = 0; i < q; i++) {
      int x;
      scanf("%d", &x);

      if (x < 1000007){
         printf("%d\n", table[x]);
       }
      else {
        printf("%d\n", -1);
      }

    }
  }

  return 0;
}
