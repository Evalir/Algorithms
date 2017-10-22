//Problem A337 from codeforces

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n = 0, m = 0; //n of students and puzzles
  int throne = 100060;
  int piece = 0;
  vector<int> pieces(60, 0);

  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> piece;
    pieces.push_back(piece);
  }

  sort(pieces.begin(), pieces.end(), greater<int>());

  for(int i = 0; i < m; i++) {
    if (pieces[i]-pieces[i+(n-1)] < throne && pieces[i]-pieces[i+(n-1)] != pieces[i]) {
      int best = pieces[i]-pieces[i+(n-1)];
      throne = best;
    }
  }

  cout << throne << endl;

}
