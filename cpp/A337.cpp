//Problem A337 from codeforces

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m; //n of students and puzzles
  int piece;
  int high, low;
  int diff = 0;
  vector<int> pieces;
  vector<int> subset;
  
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> piece;
    pieces.push_back(piece);
  }
  //Source of problem for solution: this for loop runs once, not until it finds solution
  for (int i = 0; i < n; i++) {
    int x = 0;
    int y = n;
    int currentdiff = 0;
    for(x; x < y; x++) {
      subset.push_back(pieces[x]);
    } 
    sort(subset.begin(), subset.end(), greater<int>());

    high = subset[0];
    low = subset[subset.size() - 1];
    currentdiff = high - low;

    if (currentdiff < diff) {
      diff = currentdiff;
      x++;
      y++;
    } else {}

  }

  cout << diff << endl;
}
