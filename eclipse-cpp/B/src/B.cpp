#include <iostream>
#include <string>
using namespace std;



int main() {
	string s;
	cin >> s;

	int best = 0;
	int strcounter = 0;

	for (int i = 0; i < s.length(); i++) {
		int counterA = 0;
		int counterB = 0;
		int inbest = 0;

		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'a') {
				counterA++;
			}
			if (s[j] == 'b') {
				counterB++;
			}

			if (counterA == counterB) {
				inbest = counterA;
			}
		}
		if (counterA == counterB) {
						inbest = counterA;
					}

		if (inbest > best) best = inbest;
	}

	cout << best << endl;


	return 0;
}
