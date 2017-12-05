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
  int cake[N][N];
  int counter = 0;

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      char x;
      cin >> x;
      if(x == '.')
        cake[i][j] = 0;
      else
        cake[i][j] = 1;
    }
  }

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      //check columns
      if (cake[i][j] == 1 && cake[i][j])
    }
  }
  return 0;
}
