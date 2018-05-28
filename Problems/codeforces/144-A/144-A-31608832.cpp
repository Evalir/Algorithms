#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> soldiers;

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		soldiers.push_back(x);
	}

	int hsoldier = 0, lsoldier = 100;
	int hpos = 0, lpos = 0;
	int seconds;

	for (int i = 0; i < n; i++) {
		if (soldiers[i] > hsoldier) {
			hsoldier = soldiers[i];
			hpos = i;
		}
		if (soldiers[i] < lsoldier) {
			lsoldier = soldiers[i];
			lpos = i;
		}
		if (soldiers[i] == hsoldier && i < hpos) {
			hsoldier = soldiers[i];
			hpos = i;
		}
		if (soldiers[i] == lsoldier && i > lpos) {
			lsoldier = soldiers[i];
			lpos = i;
		}
	}

	//cout << hpos << " HIGH LOW " << lpos << endl;
	//calculate seconds;
	if (hpos < lpos) seconds = hpos + ((soldiers.size() - 1) - lpos);
	else if (lpos < hpos) seconds = (hpos - 1) + ((soldiers.size() - 1) - lpos);


	cout << seconds << endl;
}