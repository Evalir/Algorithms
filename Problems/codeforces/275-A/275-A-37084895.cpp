#include <iostream>
#include <algorithm>
using namespace std;

int arr[3][3];
int state[3][3];
int main() {
	int maxrep = -1;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> arr[i][j];
			maxrep = max(maxrep, arr[i][j]);
		}
	}
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			state[i][j] = 1;
		}
	}

	for(int i = 0; i < maxrep; i++) {
		for(int a = 0; a < 3; a++) {
			for(int b = 0; b < 3; b++) {
				if (arr[a][b] > 0) {
					arr[a][b]--;
					(state[a][b] == 1) ? state[a][b] = 0 : state[a][b] = 1;
					if(a != 0)
						state[a-1][b] == 1 ? state[a-1][b] = 0 : state[a-1][b] = 1;
					if(a != 2)
						state[a+1][b] == 1 ? state[a+1][b] = 0 : state[a+1][b] = 1;
					if(b != 0)
						state[a][b-1] == 1 ? state[a][b-1] = 0 : state[a][b-1] = 1;
					if(b != 2)
						state[a][b+1] == 1 ? state[a][b+1] = 0 : state[a][b+1] = 1;
				}
			}
		}
	}

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << state[i][j];
		}
		cout << endl;
	}

	return 0;
}