#include <iostream>
#include <set>
using namespace std;

int main() {

	int n;
	cin >> n;
	set<int> levels;
	set<int> pass;

	for (int i = 1; i <= n; i++) {
		levels.insert(i); //insert all levels to pass
	//	cout << "generating " << i << endl;
	}
	int p;
	cin >> p;
	for (int i = 0; i < p; i++) {
		int x;
		cin >> x;
		pass.insert(x);
	//	cout << "inserting " << x << endl;
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		pass.insert(x);
	//	cout << "inserting " << x << endl;
	}

	int passable = 0;

	for(auto x : levels) {
	//	cout << "HELLO" << x << endl;
		if (pass.count(x) > 0) {
			passable++;
		}
	}

	if (passable < levels.size()) cout << "Oh, my keyboard!" << endl;
	else cout << "I become the guy." << endl;
	//cout << levels.size() << endl;

	return 0;
}
