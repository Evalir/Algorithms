#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, k;
  int candy;
  int days = 0;
  int acc = 0;
  vector<int> candies;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> candy;
    candies.push_back(candy);
  }

  candy = 0; //Now this variable will be used for bryan's candies

  for (int i = 0; i < n; i++) {
   
    if (candy >= k) {
      break;
    }

    if (acc >= 8) {
      candy += 8;
      acc -= 8;
      days++;
    } else if (acc < 8) {
      candy += acc;
      
    }

    if (candies[i] > 8)
    if (candies[i] > 8) {
        acc += candies[i] - 8;
        candy += 8;
        days++;
      //  cout << days << " " << candy << endl;
    } else if (candies[i] <= 8) {
      candy += candies[i];
      days++;
    }
  }

  if(candy >= k) {
    cout << days << endl;
  } else {
    cout << "-1" << endl;
  }

}
