//struct practice

#include <iostream>
#include <cmath>
using namespace std;

struct Point {
  double x, y;
};

  double computeDistance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2.0) + pow(b.y - a.y, 2.0));
  }
int main () {

  Point a, b;
  a.x = 5;
  a.y = 4;
  b.x = 8;
  b.y = 4;

  cout << computeDistance(a, b) << endl;

}
