#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		vector<string> V;
		bool allahu = 0, murica = 0;
		int ai, mi;
		for(int i = 0; i < n; i++) {
			string a;
			cin >> a;
			V.push_back(a);
			for(int j = 0; j < a.size(); j++) {
				if (a[j] == '#') {
					allahu = 1;
					ai = i;
				}
				else if (a[j] != '#') {
					murica = 1;
					mi = i;
				}
				else
					continue;
			}
		}
		if (murica && allahu) {
			for(int i = mi+1; i < V.size(); i++) {
				cout << V[i];
				cout << ' ';
			}
			cout << V[mi] << ' ';
			for(int i = 0; i < mi; i++) {
				cout << V[i];
				if (i != mi-1)
					cout << ' ';
			}
		}
		else {
			for(int i = 0; i < V.size(); i++) {
				cout << V[i];
				if (i != n-1)
					cout << ' ';
			}
		}
		cout << endl;
	}
	
}
