#include <iostream>
#include <cstdio>
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
  int S, B; //n of soldiers and case report

  while (2==scanf("%d %d", &S, &B) && S != 0 && B != 0) {
    set<int> el;

    //init set
    for(int i = 0; i <= S; i++) {
        el.insert(i);
    }

    for(int i = 0; i <= B; i++) {
      int L, R;
      scanf("%d %d", &L, &R);
      if (L > R) {
        int temp = R;
        R = L;
        L = temp;
      }
      for (int i = L; i <= R; i++) {
        el.erase(i);
      }
      auto buddyL = el.lower_bound(L);
      if (buddyL != el.begin() || buddyL != el.end()) {
        buddyL--;
      }
      else if (buddyL <= el.begin()) {
        buddyL = "*";
      }
      auto buddyR = el.lower_bound(R);

      printf("%d %d", *buddyL, *buddyR);


    }


  }
}
