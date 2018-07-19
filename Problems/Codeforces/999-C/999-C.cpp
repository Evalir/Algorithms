#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
using VVI = vector<vector<int> >;

int main() {
  int n,k;
  cin >> n >> k;
  string S;
  cin >> S;
  VVI oc(30);
  vector<bool> used(400009);
  for(int i = 0; i < S.size(); i++) {
    int v = S[i]-'a';
//    cerr << " oc " << v << endl;
    oc[v].push_back(i);
  }  
  for(int i = 0; i < oc.size(); i++) {
    for(auto j : oc[i]) {
      if (k > 0) {--k, used[j] = true;}
    }
  }

  for(int i = 0; i < S.size(); i++) {
    if (!used[i])
      cout << S[i];
  }
  puts("");
  return 0;

}
