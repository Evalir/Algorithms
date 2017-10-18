//Problem 10935 of queue UVA
//by evalir

#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int N;
  int cnt = 0;
  while (1==scanf("%d", &N) && N != 0) {
    // if(cnt != 0)printf("\n");
    cnt++;
    queue<int> q;
    vector<int> popped;

    for (int i = 1; i <= N; i++) {
      q.push(i);
    }

    for (int i = 0; i < N - 1; i++) {
      //printf("%d IS THROWN\n", q.front());
      popped.push_back(q.front());
      q.pop(); // pops element at the front
      int felement = q.front();
      //printf("%d TO BACK\n", q.front());
      q.pop();
      q.push(felement);
    }

    printf("Discarded cards: ");
    for (int i = 0; i < popped.size(); i++) {

      if (i != popped.size()-1) {
        printf("%d,", popped[i]);
      }
      else {
        printf("%d", popped[i]);
      }
    }
    printf("\n");
    printf("Remaining card: %d\n", q.front());
    //printf("%d REMAINS\n", q.front());
  }
  return 0;
}
