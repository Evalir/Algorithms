//Problem A1660 from codeforces (Twin)
//by evalir.io
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  int n;
  vector<int> coins;
  int coinval = 0;
  int counter = 0;
  int coinsum = 0;
  int mysum = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> coinval;
    coins.push_back(coinval);
  }

  sort (coins.begin(), coins.end(), greater<int>());

  for (int i = 0; i < coins.size(); i++) {
    coinsum += coins[i];
  }

  for (int i = 0; mysum <= coinsum; i++) {
    counter++;
    mysum += coins[i];
    coinsum -= coins[i];
  }

  cout << counter << endl;

  return 0;
}
