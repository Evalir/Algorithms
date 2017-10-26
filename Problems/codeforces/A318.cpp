#include <iostream>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
int main() {
	unsigned long long N, K;
	cin >> N >> K;
	int apos = K - (N / 2);

	cout << apos << endl;
	vector<unsigned long long> odeven;

	if (K < N / 2) {
		for(int i = 1; i <= N; i+= 2) {
			odeven.push_back(i);
			cout << i << " GEN"<< endl;
		}
		cout << odeven[K-1] << endl;
	}
	else if (K > N / 2) {
		for(int i = 2; i <= N; i+= 2) {
			odeven.push_back(i);
			cout << i << " EVEN GEN" << endl;
		}
		cout << odeven[apos-1] << endl;
	}

	return 0;
}
