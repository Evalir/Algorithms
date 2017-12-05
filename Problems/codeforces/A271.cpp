//Problem A271 codeforces

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int year;
  cin >> year;
  string y = to_string(year);


  for (int i = year+1; i < 10000; i++) {
	  string s = to_string(i);
	  if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] &&
			  s[1] != s[0] && s[1] != s[2] && s[1] != s[3] &&
			  s[2] != s[0] && s[2] != s[1] && s[2] != s[3] &&
			  s[3] != s[0] && s[3] != s[1] && s[3] != s[2]) {
		  cout << i << endl;
		  break;
	  }
  }


  return 0;
}
