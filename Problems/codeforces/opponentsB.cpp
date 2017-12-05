#include <iostream>
#include <string>
using namespace std;

int main() {

  int n = 0, d = 0;
  int throne = 0;
  int consecutive = 0;
  int present = 0;
  string opponents;
  string maxo;

  cin >> n >> d;

  for (int i = 0; i < n; i++) {
    maxo += '1';
  }

  for (int i = 0; i < d; i++) {
    cin >> opponents;

    for (int j = 0; j < n; j++) {

    if (opponents[j] == '0') {
      consecutive++;
      //cout << consecutive << endl;
      break;
      }

    if (opponents == maxo) {
      if (throne < consecutive) throne = consecutive;
      consecutive = 0;
      break;
      }

    }

  }

  if (consecutive > throne) {
    throne = consecutive;
  }



  cout << throne << endl;

}
