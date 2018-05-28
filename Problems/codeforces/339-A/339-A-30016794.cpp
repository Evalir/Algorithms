#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

  vector<char> numbers;
  string addition;
  string naddition;

  cin >> addition;

  for (int i = 0; i < addition.length(); i++) {
    if (addition[i] == '1' || addition[i] == '2' || addition[i] == '3') {
      numbers.push_back(addition[i]);
    }
  }

  sort(numbers.begin(), numbers.end());

  for (int i = 0; i < numbers.size(); i++) {
    naddition += string(1, numbers[i]);
    naddition += "+";
  }

  naddition.erase(naddition.length() -1, 1);
  cout << naddition << endl;
}