#include <iostream>
using namespace std;
int main(){
	int n, a, b;
	cin >> n >> a >> b;
	
	if (b > 0) {
		for(int i = 0; i < b; i++) {
			a += 1;
			if (a > n) a = 1;
		}
		cout << a << endl;
	}
	else {
		for (int i = 0; i < abs(b); i++) {
			a -= 1;
			if (abs(a) == 0) a = n;
		}
		cout << abs(a) << endl;
	}
	return 0;
}