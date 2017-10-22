#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int house;
	cin >> house;
	int steps = 0;
	if (house % 5 == 0) steps = house / 5;
	else if (house % 5 != 0) steps = (house / 5) + 1;

	cout << steps << endl;

}
