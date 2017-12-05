//problem 131A from codeforces

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> lucky = {4,7,44,77,47,74,447,474,744,444,777, 477};
	int number;
	cin >> number;
	for(int i = 0; i < lucky.size(); i++) {
	    if (number % lucky[i] == 0) {
	        cout << "YES";
	        //cout << lucky[i];
	        return 0;
	    }
	}
	cout << "NO" << endl;
	
	return 0;
}
