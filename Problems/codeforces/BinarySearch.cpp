//Binary Search algorithm
#include <iostream>
#include <vector>
using namespace std;

int bSearch (vector<int> arr, int goal){

  int max = arr.size() - 1;
  int min = 0;
  int guess = 0;

  while(min <= max) {
    guess = (max + min) / 2;
    if(arr[guess] == goal) {
      return guess;
    } else if (arr[guess] < goal) {
      min = guess + 1;
      cout << min << endl;
    } else if (arr[guess] > goal) {
      max = guess - 1;
      cout << max << endl;
    }
  }

  cout << "Number not found in array" << endl;
  return -1;

}

int main() {
  vector<int> arr;
  for (int i = 0; i < 10; i++) {
    arr.push_back(i);
    //cout << arr[i] << endl;
  }
  cout << bSearch(arr, 7) << endl;
}
