#include <iostream>
#include <string>
#include <algorithm>

int main() {
	int N, M;
	string S;
	int l, r;
	char c1, c2;

	cin >> N >> M;
	cin >> S;
	
	// for(int i = 0; i < M; i++) {
	// 	cin >> l >> r >> c1 >> c2;
	// 	l -= 1;
	// 	r -= 1;
	// 	for(int j = l; j <= r; j++) {
	// 		if (S[j] == c1) S[j] == c2;
	// 		else continue;
	// 	}
	// }


	cout << S << endl;
	return 0;
}