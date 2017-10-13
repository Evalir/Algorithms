/*Theater Square algorithm problem from codeforces.*/
#include <iostream>

long long retTotalTiles(long long  x, long long y) {
    return x * y;
}

int main() {
//we're using long long to avoid overflow, as it allows 16-bit size integers
  long long x;
  long long y;
  int z;
  long long sq_x;
  long long sq_y;

//get initial values
  std::cin >> x >> y >> z;

//check if width & height / tiles is not exact & assign correct number to sq_x&y
  if (x % z != 0) {
    sq_x = (x/z) + 1;
  } else {
    sq_x = (x/z);
  }
  if (y % z != 0) {
    sq_y = (y/z) + 1;
  } else {
    sq_y = (y/z);
  }

  std::cout << retTotalTiles(sq_x, sq_y) << std::endl;


return 0;

}
