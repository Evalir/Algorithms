#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string st;
  char ns[n+5];
  cin >> st;
  int l = 0, r = n-1;
  bool ok = true;
  for(int i = st.size()-1; i >= 0; i--) {
    if (ok) {
      ok = !ok;
      ns[r] = st[i];
      --r;
    }
    else {
      ok = !ok;
      ns[l] = st[i];
      ++l;
    }
  }

  for(int i = 0; i < n; i++) {
    cout << ns[i];
  }
  return 0;

}
