//Problem A282 from codeforces
//By evalir.io

#include <iostream>
#include <string>

using namespace std;

int main()  {

  int n = 0;
  int x = 0;

  //Read the number of statements to print
  cin >> n;

  //for loop to read all statements
  for (int i = 0; i < n; i++){
    string s;

    cin >> s;
    if(s == "X++" || s == "++X" || s == "x++" || s == "++x") {
      x++;
    } else if (s == "X--" || s == "--X" || s == "x--" || s== "--x") {
      x--;
    }

  }

  cout << x << endl;


}
