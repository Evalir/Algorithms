#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
int main() {
  // initialize V
  vector<int> V = {1,2,-1,2,-5,4,5,1};

  // sum that we want
  int wantedSum = 0;

  // prefix sum of array V
  vector<Long> PS(V.size());
  for (int i = 0; i < V.size(); ++i) {
    PS[i] = i == 0 ? V[i] : (V[i] + PS[i-1]);
  }
  for (int i = 0; i < V.size(); i++) {
    cout << PS[i] << ' ';
  }
  cout << endl;
  // this is a map having the index where we last saw a number X
  map<Long,int> latestSeenAt;
  latestSeenAt[0] = -1;
  // PS[i] - PS[j-1] = wantsSum
  // PS[j-1] = PS[i] - wantsSum
  for (int i = 0; i < PS.size(); ++i) {
    int highestJ = -1;
    // If we have seen PS[i] - wantSum before then it means we have a PS[j-1]
    // that we can substract from PS[i] and get wantedSum
    if (latestSeenAt.count(PS[i] - wantedSum) > 0) {
      // latestSeenAt[PS[i] - wantedSum] has the index (j-1) we last saw so
      // adding 1 will get us 'j'
      highestJ = latestSeenAt[PS[i] - wantedSum] + 1;
    }
    // we found a j that satisfies (SUM[j..i] = wantedSum)
    if (highestJ != -1) {
      cout << highestJ << "," << i << endl;
    }

    latestSeenAt[PS[i]] = i;
  }

}