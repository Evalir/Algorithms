//Problem A263 codeforces

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int matrix[5][5];
	int x,y;
	int data;
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> data;
			matrix[i][j] = data;
			if (data == 1) {
				x = i;
				y = j;
			}
		}
	}
	
	cout << abs(x - 2) + abs(y - 2) << endl;
	return 0;
}
