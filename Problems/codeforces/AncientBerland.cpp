//Codeforces problem 1C - Ancient Berland Circus
//By evalir.io -> @evalir.io IG, hievalir@gmail.com
#include <iostream>
#include <cmath>

//Compute smallest area <- This actually solves the whole problem.

float ShoelaceForumula(float x1, float y1, float x2, float y2, float x3, float y3) {

	return std::abs ( (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)) / 2);
}

int main () {
	//declare & read values from stdi.
	float x1, x2, x3, y1, y2, y3;

	std::cin >> x1 >> y1;
	std::cin >> x2 >> y2;
	std::cin >> x3 >> y3;

	//print result
	if( ShoelaceForumula(x1, y1, x2, y2, x3, y3) < 1) {
		std::cout << 1;
	} else {
	std::cout << ShoelaceForumula(x1, y1, x2, y2, x3, y3);
}

	return 0;
}
