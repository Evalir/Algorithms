//Problem 69A from codeforces
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  int x,y,z;
  vector<int> v_x;
  vector<int> v_y;
  vector<int> v_z;

  cin >> n;
  
  for(int i = 0; i < n; i++ ) {
    cin >> x >> y >> z;
    v_x.push_back(x);
    v_y.push_back(y);
    v_z.push_back(z);
  }

  x = 0;
  y = 0;
  z = 0;
 
  for(int i = 0; i < n; i++) {
    x += v_x[i];
    y += v_y[i];
    z += v_z[i];
  }

  if (x == 0 && y == 0 && z == 0) cout << "YES" << endl;
  else cout << "NO" << endl;


}
