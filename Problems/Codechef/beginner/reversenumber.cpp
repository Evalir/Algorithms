#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		string A;
		cin >> A;
		for(int i = A.size()-1; i >= 0; i--)
			cout << A[i];
		cout << endl;
	}
	return 0;
}
