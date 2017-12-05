//
// Created by Enrique Ortiz on 10/15/17.
//
#include <cstdio>
#include <set>
using namespace std;

int main() {
    int T;
    //cin >> T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {

        multiset<int> List1;
        multiset<int> List2;
        multiset<int>::iterator it;
        int N, M;
        int x, y;
        int counter = 0;
        long sum = 0;

        scanf("%d %d", &N, &M);

        for (int i = 0; i < N; i++) {
            scanf("%d", &x);
            List1.insert(x);
        }

        for (int i = 0; i < M; i++) {
            scanf("%d", &y);
            List2.insert(y);
        }

        for (it = List1.begin(); it != List1.end(); it++) {
          while (List1.count(*it) < List2.count(*it)) {
            List2.erase(List2.find(*it));
            counter++;
          }
          if (List2.count(*it) == 0) {
            counter++;
          }
        }

        for (it = List2.begin(); it != List2.end(); it++) {
          while (List1.count(*it) > List2.count(*it)) {
            List1.erase(List1.find(*it));
            counter++;
          }
          if (List1.count(*it) == 0) {
            counter++;
          }
        }

        printf("%d\n", counter);

    }

    return 0;
}
