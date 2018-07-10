#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int m,s;
  cin >> m >> s;
  vector<int> mi(m),ma(m);
  if (s > 9*m || (s == 0 && m != 1)) {
    puts("-1 -1");
    return 0;
  }
  int cs = 0;
  for(int i = m-1; i >= 0; i--) {
    bool f = false;
    if (s-cs <= 9) {
      int fd = i;
      if(fd != 0) {
        mi[fd] = s-cs-1;
      mi[0] = 1;
      }
      else {
        mi[0] = s-cs;
      }
      for(int j = 0; j < mi.size(); j++)
       cout << mi[j];
       puts(" ");
       f = true;
       break;
    }
    if (f)
      break;
    mi[i] = 9;
    cs += 9;
  }  
  cs = 0;
  for(int i = 0; i < m; i++) {
    bool f = false;
    if (s-cs <= 9) {
      ma[i] = s-cs;
      for(int j = 0; j < ma.size(); j++)
        cout << ma[j];
        f = true;
        break;
    }
    if (f)
      break;
    ma[i] = 9;
    cs += 9;
  }

  return 0;
}
int numberOfTrailingZeros(int x) {
  int cnt = 0;
  while(!(x & 1)) {
    ++cnt;
    x << 1;
  }
  return cnt;
}
