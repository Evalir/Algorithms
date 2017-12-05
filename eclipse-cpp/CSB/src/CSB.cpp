#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int N, K;
	vector<int> el;
	map<int, int> index;
	map<int, int> dist;
	int smol = 100010;
	int lid = 0;
	int big = 0;
	int bid = 0;

	cin >> N >> K;

	for (int i = 0 ; i < N; i++) {
		int X;
		cin >> X;
		el.push_back(X);
		dist[X] = X - K;
	}

	//get biggest element
	for (int i = 0; i < N; i++) {
		if(el[i] > big) {
			big = el[i];
			bid = i;
		}
	}

	cout << "BIG EL: " << big << endl;
	cout << "BIG ID: " << bid << endl;

	//get smallest element
	for (int i = 0; i < N; i++) {
		if (el[i] >= dist[big] && el[i] > dist[big]) {
			smol = el[i];
			lid = i;
		}
	}
	cout << "LOW EL: " << smol << endl;
	cout << "LOW ID: " << lid << endl;
	cout << "DIST - 1 " << dist[big] << endl;

	el[bid] = smol;
	el[lid] = big;

	for (int i = 0; i < N; i++) {
		cout << el[i] << endl;
	}

	return 0;
}
