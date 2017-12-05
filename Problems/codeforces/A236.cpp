//Problem A236 codeforces, by evalir.io

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string username;
  int counter = 0;
  int repeated = 0;
  cin >> username;

  sort(username.begin(), username.end());

  for(int i = 0; i < username.length(); i++) {
    
    if(username[i+1] == username[i]) {

    } else {
      counter++;
    }
  
  }

  if (counter % 2 == 0) cout << "CHAT WITH HER!" << endl;
  else cout << "IGNORE HIM!" << endl;

  
}
