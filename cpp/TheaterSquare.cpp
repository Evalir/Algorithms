#include <iostream>

int retTotalTiles(int x, int y) {
    return x * y;
}

int main() {
  int x;
  int y;
  int z;
  int sq_x;
  int sq_y;

//get initial values
  std::cout << "Enter width" << std::endl;
  std::cin >> x;
  std::cout << "Enter height" << std::endl;
  std::cin >> y;
  std::cout << "Enter tile size" << std::endl;
  std::cin >> z;

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

  std::cout << "The num of tiles needed to fill the teather is " << retTotalTiles(sq_x, sq_y) << std::endl;


return 0;

}
