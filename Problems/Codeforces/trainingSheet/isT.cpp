#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int A,B,C;
	cin >> A >> B >> C;
	int s = A+B+C;
	int mS = max(A,max(B,C));
	if (mS < s - mS) {
		cout << "Valid" << endl;
	}
	else
		cout << "Invalid" << endl;
	return 0;
}