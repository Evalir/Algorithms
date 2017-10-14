//Problem taxi B158 from codeforces
// By evalir

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n = 0;
  int taxis = 0;
  vector<int> groups;


  //read number of groups
  cin >> n;

for (int i = 0; i < n; i++) {
    int group = 0;
    cin >> group;
    groups.push_back(group);
  }
  
  int n4 = 0, n3 = 0, n2 =0, n1 = 0;
  
  for(int i = 0; i < n; i++) {
    if (groups[i] == 4) n4++;
    else if (groups[i] == 3) n3++;
    else if (groups[i] == 2) n2++;
    else if (groups[i] == 1) n1++;
  }
  //Ya tenemos la cantidad de 4, 3, 2 y 1, lo que queda es saber como lo dividiremos.
  taxis += n4; //mandar todos los de 4 automaticamente
  
  
  cout << taxis << endl;



}
