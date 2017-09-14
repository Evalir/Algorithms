#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, k;
  int candy;
  int days;
  int acc = 0;
  vector<int> candies;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> candy;
    candies.push_back(candy);
  }

  candy = 0; //Now this variable will be used for bryan's candies

  for (int i = 0; i < n; i++) {

    if (candies[i] > 8) {
        acc += candies[i] - 8;
        candy += 8;
        days++;
      //  cout << days << " " << candy << endl;
    } else if (candies[i] <= 8) {
      candy += candies[i];
      days++;
    }
    if (acc != 0 && acc >= 8) {
      candy += 8;
      acc -= 8;
      days++;
    }

    if (candy >= k) {
      break;
    }

  }

  if(candy >= k) {
    cout << days << endl;
  } else {
    cout << "-1" << endl;
  }

}
