#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
  int N;
  cin >> N;
  string travel;
  cin >> travel;
  int counterS = 0; //seattle
  int counterF = 0; //sfo
  for(int i = 0; i < travel.length() - 1; i++) {
    if (travel[i] == 'S' && travel[i+1] == 'F')
      counterF++;
    else if (travel[i] == 'F' && travel[i+1] == 'S')
      counterS++;
    else
      continue;
  }
  if (counterF > counterS) cout << "YES" << endl;
  cout << "NO" << endl;
  return 0;
}
