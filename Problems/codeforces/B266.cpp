//Problem B266 codeforces

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n, t;
  string quiw;
  cin >> n >> t; //read n of children, seconds to ideal formation
  cin >> quiw; //Read first order

  for (int i = 0; i < t; i++) {
    for (int j = 0; j < quiw.length(); j++) {
      if (quiw[j] == 'B' && quiw[j + 1] == 'G') {
        quiw[j] ='G';
        quiw[j + 1] = 'B';
        j++;
      }
    }
  }
  
  cout << quiw << endl;

}
