#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  string S;
  cin >> S;
  map<char,int> col;
  for(int i = 0; i < n; i++)
    col[S[i]]++;
  for(auto x : col) {
    if (x.second > k) {
      cout << "NO" << endl;
      return 0;
    }
    else
      continue;
  }
  cout << "YES" << endl;
  return 0;
}
