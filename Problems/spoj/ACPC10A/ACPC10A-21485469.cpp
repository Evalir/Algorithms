#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	while(true) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			return 0;
		(b + (b-a) == c) ? cout << "AP " << c + (b-a) << endl : cout << "GP " << c * (b/a) << endl;
	}
	return 0;
}