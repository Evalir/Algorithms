#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	string S = to_string(a-b);
	S[0] = S[0] == '9' ? S[0] = '1' : S[0] = '9';
	cout << S << endl;
	return 0;
}