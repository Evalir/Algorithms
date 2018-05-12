#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	string S;
	cin >> n >> S;
	int ans = 0;
	for(int i = 0; i < n; i++)
		ans += S[i]-'0';
	cout << ans << endl;
	return 0;
}
