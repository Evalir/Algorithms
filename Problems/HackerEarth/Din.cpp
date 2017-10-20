#include <cstdio>
#include <vector>
using namespace std;

int main() {
  int T;
  scanf("%d", &T);

  for (int i = 0; i < T; i++) {
    int n, rogue;
    scanf("%d", &n);
    vector<int> VI;
    vector<int> mem(1000003, 0);


    for (int i = 0; i < n; i++) {
      int x;
      scanf("%d", &x);
      VI.push_back(x);
      mem[x] += 1;
      //cout << mem[x] << endl;
    }

    for (int i = 0; i < mem.size(); i++) {
      if (mem[i] == 1) rogue = i;
    }

    printf("%d\n", rogue);
  }

  return 0;
}
