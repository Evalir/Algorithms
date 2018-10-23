#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using VI = vector<int>;

struct LinearSieve {
  VI P;
  VI C;
  LinearSieve(int L): C(L+1) {
    for (int i = 2; i < C.size(); ++i) {
      if (C[i] == 0) {
          C[i] = i;
          P.push_back (i);
      }
      for (int j=0; j < P.size() && P[j]<=C[i] && i*P[j]<=L; ++j)
          C[i * P[j]] = P[j];
    }
  }
};
struct NormalSieve {
  VI P;
  VI C;
  NormalSieve(int L): C(L+1) {
    for (int i = 2; i < C.size(); ++i) {
      if (C[i] == 1) continue;
      C[i] = i;
      P.push_back (i);
      for (Long j = 2*i; j <= L ; j += i)
          C[j] = 1;
    }
  }
};

int main() {

  cout << 1.0 * clock() / CLOCKS_PER_SEC << endl;
  LinearSieve LS(100000000);
  cout << LS.P.size() << endl;
  cout << 1.0 * clock() / CLOCKS_PER_SEC << endl;
  NormalSieve NS(100000000);
  cout << NS.P.size() << endl;
  cout << 1.0 * clock() / CLOCKS_PER_SEC << endl;
}