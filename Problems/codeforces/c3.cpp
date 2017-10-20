#include <cstdio>
#include <vector>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;
int n, m;

bool checkRight(VVI &grid, int r, int c) {

  for(int i = c; i < m; i++) {
    if (i != c ) {
      if (grid[r][i] >= grid[r][c]) {
          return false;
      }
    }
  }
  return true;
}

bool checkLeft(VVI &grid, int r, int c) {

    for(int i = c; i >= 0; i--) {
      if (i != c ) {
        if (grid[r][i] >= grid[r][c]) {
            return false;
        }
      }
    }

    return true;
}

bool checkDown(VVI &grid, int r, int c) {
  for(int i = r; i < n; i++) {
    if (i != r) {
      if (grid[i][c] >= grid[r][c]) {
        return false;
      }
    }
  }
  return true;
}

bool checkUp(VVI &grid, int r, int c) {

    for(int i = r; i >= 0; i--) {
      if(i != r) {
        if (grid[i][c] >= grid[r][c]) {
          return false;
      }
    }
  }
  return true;
}


int main() {
  int r, c;
  scanf("%d %d", &r, &c);
  //cin >> r >> c;
  n = r;
  m = c;
  VVI grid(r);
  int counter = 0;

  //initialize array
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      int x;
      scanf("%d", &x);
      grid[i].push_back(x);
    }
  }

  for (int i = 0; i < r; i++) {
    //cout << " FILA : " << i << endl;
    for (int j = 0; j < c; j++) {
      //check right
      if (checkRight(grid, i, j)) {
        counter++;
        //cout << "TRUE RIGHT ON " << i << " "<< j << endl;
      }
      if (checkDown(grid, i, j)) {
        counter++;
        //cout << "TRUE DOWN ON " << i << " "<< j << endl;
      }
      if (checkUp(grid, i, j)) {
        counter++;
        //cout << "TRUE UP ON " << i << " "<< j << endl;
      }
      if (checkLeft(grid, i, j)) {
        counter++;
        //cout << "TRUE LEFT ON " << i << " "<< j << endl;
      }

    }
  }
  printf("%d\n", counter);
  return 0;
}
