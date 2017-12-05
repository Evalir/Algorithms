//problem uri1069 from urionlinejudge
//by evalir.io

#include <cstdio>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;
  char c;

  for(int i = 0; i < N; i++) {

    stack<int> d;
    string s;
    int l = 0, r = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
      cout << "HI" << endl;
      if (s[i] == '<') {
        d.push(s[i]);
        l++;
      }
      else if (s[i] == '>') {
        d.push(s[i]);
        r++;
      }
    }
    cout << "l: " << l << " r: " << r << endl;
    // if (l < r) {
    //   printf("%d", l);
    // } else if (l >= r) {
    //   printf("%d", r);
    // }

    return 0;
  }
}
