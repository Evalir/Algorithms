#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int el[n+10];
  for(int i = 0; i < n; i++) {
    cin >> el[i];
    --el[i];
  }
  for(int i = 0; i < n; i++) {
    if (el[el[el[i]]] == i) {
      puts("YES");
      return 0;
    }
  }
  puts("NO");
  return 0;
}
