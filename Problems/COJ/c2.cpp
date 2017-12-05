#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  long result = 0;
  for(int i = 0; i < M*2; i++) {
    string s;
    cin >> s;
    if (s[0] == '+') {
      s.erase(0,1);
      cout << s << endl;
      int num = stoi(s);
      result += num;
    }
    else if (s[0] == '-') {
      s.erase(0,1);
      cout << s << endl;
      int num = stoi(s);
      result -= num;
    }
  }

  cout << result << endl;
  return 0;
}
