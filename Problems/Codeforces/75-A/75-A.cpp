#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;
using ll = long long;

int main() {
  ll a,b;
  cin >> a >> b;
  ll c = a + b;
  string X = to_string(a), Y = to_string(b), Z = to_string(c);
  string xa,xb,xc;
  for(auto z : X)
    if (z != '0') xa += z;
  for(auto z : Y)
    if (z != '0') xb += z;
  for(auto z : Z)
    if (z != '0') xc += z;
  stringstream K(xa), KZ(xb), KC(xc);
  ll q,w,e;
  K >> q;
  KZ >> w;
  KC >> e;
//  cerr << q << ' ' << w << endl;
  ll r = q+w;
  if (e == r)
    puts("YES");
  else
    puts("NO");
  return 0;
  
}
