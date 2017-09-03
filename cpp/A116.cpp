//Problem A116 from codeforces
//by evalir
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int a, b; //these will read exit and enter, in order
  int pcount = 0; //Passenger count for determining minimum capacity
  int stops = 0;
  vector<int> maxcapacity;

  cin >> stops;

  for(int i = 0; i < stops; i++) {
    //read passengers that exited
    cin >> a;
    cin >> b;
    pcount -= a;
    pcount += b;
    maxcapacity.push_back(pcount);
  }

 sort (maxcapacity.begin(), maxcapacity.end(), greater<int>());

 cout << maxcapacity[0] << endl;

}
