#include <iostream>
#include <string>
using namespace std;

int main() {

  int n = 0, d = 0;
  int throne;
  int consecutive = 0;
  int present = 0;
  string opponents;

  cin >> n >> d;

  for (int i = 0; i < d; i++) {
    cin >> opponents;
    for (int j = 0; j < n; j++) {
      if (opponents[j] == 0) {
        consecutive++;
        break;
      }
    }
    if (throne < consecutive) {
      throne = consecutive;
    }
  }



  cout << throne << endl;




}
