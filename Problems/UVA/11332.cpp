#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int joaSums(long long N) {
	int acc = 0;
	if (N < 10) return N;
	else {
		while (N > 0) {
			int temp = N % 10;
			acc += temp;
			N /= 10;
		}
		if (acc >= 10) return joaSums(acc);
		else return acc;
	}
}

int main() {
	long long N;
	while(cin >> N && N != 0) {
	int ans = joaSums(N);
	cout << ans << endl;
	}
	return 0;
}
