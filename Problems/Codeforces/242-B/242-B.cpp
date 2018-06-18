#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<pair<ll,ll> > V(n);
  pair<ll,ll> mme = {(int)1e9, -(int)1e9};
  for(pair<ll,ll>& v : V) {
    cin >> v.first >> v.second; 
    mme.first = min(mme.first, v.first);
    mme.second = max(mme.second, v.second);
  }
  for(int i = 0; i < V.size(); i++) {
    if (V[i].first == mme.first && V[i].second == mme.second) {
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}

