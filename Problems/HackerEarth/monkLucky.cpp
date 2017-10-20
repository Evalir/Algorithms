#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int main() {
  int T;
  scanf("%d", &T);

  for (int i = 0; i < T; i++) {

    int N;
    scanf("%d", &N);
    vector<int> el;
    map<int, int> mem;

    for(int i = 0; i < N; i++) {
      int ai;
      scanf("%d", &ai);
      el.push_back(ai);
      mem[ai] += 1;
    }

    pair<int, int> minpair = *(mem.begin());
    if(minpair.second % 2 == 0) printf("Unlucky\n");
    else printf("Lucky\n");

  }
}
