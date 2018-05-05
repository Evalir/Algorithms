#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

class CheckFunction {
public:
	int newFunction(string code) {
		int ans = 0;
		for(int i = 0; i < code.size(); i++) {
			if (code[i] == '0')
				ans += 6;
			else if (code[i] == '1')
				ans += 2;
			else if (code[i] == '2')
				ans += 5;
			else if (code[i] == '3')
				ans += 5;
			else if (code[i] == '4')
				ans += 4;
			else if (code[i] == '5')
				ans += 5;
			else if (code[i] == '6')
				ans += 6;
			else if (code[i] == '7')
				ans += 3;
			else if (code[i] == '8')
				ans += 7;
			else if (code[i] == '9')
				ans += 6;
		}
		return ans;
	}
	
};
