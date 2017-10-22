#include <cstdio>
#include <set>
using namespace std;

int main() {
  int S, B; //n of soldiers and case report

  while(2==scanf("%d %d", &S, &B) && S != 0 && B != 0) {
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
      else if (budyyL <= el.begin()) {
        buddyL = "*";
      }
      auto buddyR = el.lower_bound(R);

      printf("%d %d", *buddyL, *buddyR);


    }


  }
}
