#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int counter = 0;
  map<int, bool> freq;
  
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 0) continue;
    else
      freq[x] = true;
  }
  
  for(auto x : freq) 
    counter++;
    
  cout << counter << endl;
}