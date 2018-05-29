#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <string>
using namespace std;

int main() {
	vector<string> G;
	G.push_back("Power");
	G.push_back("Time");
	G.push_back("Space");
	G.push_back("Soul");
	G.push_back("Reality");
	G.push_back("Mind");
	vector<bool> app(6);
	for(int i = 0; i < 6; i++)
		app[i] = 0;
	int n;
	cin >> n;
	int ans = 6;
	for(int i = 0; i < n; i++) {
		string S;
		cin >> S;
		if (S == "purple") {
			ans--;
			app[0] = 1;
		}
		if (S == "green") {
			ans--;
			app[1] = 1;
		}
		if (S == "blue") {
			ans--;
			app[2] = 1;
		}
		if (S == "orange") {
			ans--;
			app[3] = 1;
		}
		if (S == "red") {
			ans--;
			app[4] = 1;
		}
		if (S == "yellow") {
			ans--;
			app[5] = 1;
		}
	}

	cout << ans << endl;
	for(int i = 0; i < 6; i++) {
		if (app[i] == 0)
			cout << G[i] << endl;
	}

	return 0;
}