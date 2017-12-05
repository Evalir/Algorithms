#include <iostream>
using namespace std;

int main(){
  int n;
  int prob = 0;

  cin >> n;

  int ntoread = n * 3;

  for (int z = 0; z < n; z++){
    int des = 0;
    for(int i = 0; i < 3; i++) {
      int k = 0;
      cin >> k;
    
      if (k != 0) des++;

      if (des >= 2 ) {
	des = 0;
	prob++;
      }

  }
 }
  cout << prob << endl;
  
}
