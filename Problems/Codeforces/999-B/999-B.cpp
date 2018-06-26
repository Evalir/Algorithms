#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

vector<int> getDiv(int n) {
  vector<int> res;
  res.push_back(1);
  for(int i = 2; i <= n/2; i++) {
    if (n % i == 0) {
      res.push_back(i);
    }
  }
  res.push_back(n);
  return res;
}

int main() {
  int n;
  cin >> n;
  string S;
  cin >> S;
  string ns = S;
  vector<int> D = getDiv(n);
  for(int i = 0; i < D.size(); i++) {
    reverse(ns.begin(), ns.begin() + D[i]);
//    cerr << "s -> " << ns << endl;
  }

  cout << ns << endl;
  return 0;
}
