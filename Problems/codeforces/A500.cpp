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
  int n, x;
  cin >> n >> x;
  VI el;
  VI mem;

  for (int i = 0; i < n - 1; i++) {
    int z;
    cin >> z;
    el.push_back(z);
  }

  //generate portals
  for(int i = 0; i < el.size(); ) {
    int p = (i+1)+el[i];
    mem.push_back(p);
    i = p-1; //set i equal to portal we generated
    //cout << p << " IN MEM" << endl;
    //cout << i+1 << " CURRENT POS" << endl;
  }

  bool canGo = false;
  for(int i = 0; i < mem.size(); i++) {
    if (mem[i] == x) {
      canGo = true;
      //cout << "found" << endl;
      break;
    }
  }

  if (canGo == true) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
