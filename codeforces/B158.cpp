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

  //sort from descending order
  sort(groups.begin(), groups.end(), greater<int>());

  for (int i = 0; i < groups.size(); i++) {
    if (groups[i] == 4) {
      taxis++;
      groups[i] = 0;
    }
   else if (groups[i] == 3) {
      taxis++;
      groups[i] = 0;
    }
   else if (groups[i] == 2 && groups[i + 1] == 2 ) {
      taxis++;
      groups[i] = 0;
      groups[i + 1] = 0;
    }
   else if (groups[i] == 1 && groups[i + 1] == 1) {
      taxis++;
      groups[i] = 0;
      groups[i + 1] = 0;
    }
   else if (groups[i] == 1 && groups[i + 1] != 1) {
      taxis++;
      groups[i] = 0;
    }
  }

  cout << taxis << endl;



}
