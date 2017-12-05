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

        if (N > M) {
          for (int x : List1) {
            if (List2.count(x) > 0) {
            List2.erase(List2.find(x));
            }
          }
          counter = List2.size();
          printf("%d\n", counter);
        }
        else {
          for (int x : List2) {
            if (List1.count(x) > 0) {
            List1.erase(List1.find(x));
            }
          }
          counter = List1.size();
          printf("%d\n", counter);
        }

    }

    return 0;
}
