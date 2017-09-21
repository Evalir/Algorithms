//Problem A467 from codeforces, by evalir.io

#include <iostream>
using namespace std;

int main(){
  int n;
  int p, q;
  int available = 0;

  cin >> n;
 
  for (int i = 0; i < n; i++) {
    
    cin >> p >> q;
    if (q - p >= 2) available++;
  }

  cout << available << endl;
}
