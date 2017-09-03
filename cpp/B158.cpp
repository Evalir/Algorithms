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
      groups.erase(groups.begin() + i);
    }
  }

  for (int i = 0; i < groups.size(); i++) {
    if (groups[i] == 3) {
      for(int z = 0; z < groups.size(); z++){
        if (groups[z] == 1) {
          taxis++;
          groups.erase(groups.begin() + z);
        }
      }
      groups.erase(groups.begin() + i);
    }
  }

  for (int i = 0; i < groups.size(); i++) {
    if(groups[i] == 2) {
      for (int z = 0; z < groups.size(); z++) {
        if (groups[z] == 2) {
          if (z!= i) taxis++;
          if (z != i) groups.erase(groups.begin() + z);
        } else if (groups[z] == 1) {
          for (int t = 0; t < groups.size(); t++) {
            if(groups[t] == 1) {
              if (t != z) taxis++;
              if (t != z) groups.erase(groups.begin() + t);
              groups.erase(groups.begin() + z);
            }
          }
        }
      }
      groups.erase(groups.begin() + i);
    }
  }

  for (int i = 0; i <= groups.size(); i++) {
    taxis++;
  }


 cout << taxis << endl;



}
