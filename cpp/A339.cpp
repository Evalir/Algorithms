#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

  vector<char> numbers;
  string addition;

  cin >> addition;

  for (int i = 0; i < addition.length(); i++) {
    if (addition[i] == '1' || addition[i] == '2' || addition[i] == '3') {
      numbers.push_back(addition[i]);
    }
  }

  sort(numbers.begin(), numbers.end());
  addition = "";

  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i];
    if(i < numbers.size() - 1 ) cout << "+";
    if(i == numbers.size()) cout << "\n";
  }

}
