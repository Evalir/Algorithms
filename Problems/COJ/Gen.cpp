#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int N;
  vector<int> p;
  vector<int> mem(100000, 0);
  cin >> N;
  int sum = 0;
  for(int i = 0; i < N; i++) {
    int x;
    cin >> x;
    p.push_back(x);
    sum += x;
    mem[i] = sum;
  }


  return 0;
}
