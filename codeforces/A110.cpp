//Problem A110 from codeforces

#include <iostream>
#include <string>

using namespace std;

int main(){
  string num;
  cin >> num; //Implement this with scanf();
  int counter = 0;
  
  for(int i = 0; i < num.length(); i++) {
    if (num[i] == '4' || num[i] == '7') counter++;
  }
  
  if (counter == 4 || counter == 7) printf("YES\n");
  else printf("NO\n");
}
