#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  string S;
  cin >> S;
  int dist = 0;
  int g = 0, t = 0;
  for(int i = 0; i < S.size(); i++) {
      if (S[i] == 'G') g = i;
      if (S[i] == 'T') t = i;
  }
  bool ok = abs(g-t) % k == 0 ? true : false;
  cerr << abs(g-t) << ' ' << ok << endl;
  for(int i = min(g,t); i <= max(g,t); i++)
    if (S[i] == '#' && abs(g-i) % k == 0) {
      cerr << "at " << i << endl;
      ok = false;
    }
  if (ok)
    puts("YES");
  else
    puts("NO");
  return 0;

}

