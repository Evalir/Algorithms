//Problem A1660 from codeforces (Twin)
//by evalir.io
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  vector<int> coins;
  int coinval;
  int counter;


  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> coinval;
    coins.push_back(coinval);
  }

  sort (coins.begin(), coins.end(), greater<int>());

  int coinsum;
  for (int i = 0; i < coins.size(); i++) {
    coinsum += coins[i];
  }
  int mysum = 0;
  /*
  find the sum of the whole shit
  then do for loop, keep adding vals to a var and decreasing those vals to the sum, until the sum's lower than the var
  print counter
  */
  //cout << coinsum << endl;

  for (int i = 0; mysum <= coinsum; i++) {
    counter++;
    mysum += coins[i];
    coinsum -= coins[i];
  }

  cout << counter << endl;



}