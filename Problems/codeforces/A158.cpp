#include <iostream>
using namespace std;

int main() {
  int n, k, z;
  int winners = 0;

  cin >> n >> k;
  int arr[n];

  for (int i = 0; i < n; i++){
    cin >> z;
    arr[i] = z;
  }

  for (int i = 0; i < n; i++){

    if (arr[i] >= arr[k-1] && arr[i] > 0 ){
      winners++;
    }
  }

  cout << winners << endl;

}
