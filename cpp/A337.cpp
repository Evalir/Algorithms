//Problem A337 from codeforces

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m; //n of students and puzzles
  int throne;
  int piece;
  vector<int> pieces;

  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> piece;
    pieces.push_back(piece);
  }
  //Source of problem for solution: this for loop runs once, not until it finds solution

  for (int i = 0; i < m - 3; i++) {
    int currentp = i;
    vector<int> subset;


    for (int j = 0; j < 4; j++) {
      subset.push_back(pieces[i]);
      i++;
      cout << pieces[i] << " ";
        
    }

    sort(subset.begin(), subset.end(), greater<int>());
    if (i == 0) throne = subset[0] - subset[subset.size() - 1]; 
    else if(subset[0] - subset[subset.size() - 1] < throne) throne = subset[0] - subset[subset.size() - 1]; 
    
  }
  
  cout << throne << endl;

}

