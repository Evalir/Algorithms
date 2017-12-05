//Problem 266a from codeforces
//By evalir.io

#include <iostream>
#include <string>
using namespace std;

int main() {
  int n = 0;
  string stones;
  int count = 0;

  cin >> n;
  cin >> stones;

  for (int i = 0; i < n; i++) {
    if (stones[i] == 'R' && stones[i + 1] == 'R') {
      count++;
    } else if (stones[i] == 'G' && stones[i+ 1] == 'G') {
      count++;
    } else if (stones[i] == 'B' && stones[i + 1] == 'B') {
      count++;
    }

  }

  cout << count << endl;
}
