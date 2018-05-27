#include <bits/stdc++.h>
using namespace std;

int main() {
	bool ok = true;
	int cnt = 0;
	for(int i = 0; i < 3; i++) {
		cnt = 0;
		char str[110];
		cin.getline(str,105);
		for(int j = 0; j < strlen(str); j++) {
			if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
				cnt++;
			else
				continue;
		}
		if (i == 0 && cnt != 5)
			ok = false;
		if (i == 1 && cnt != 7) 
			ok = false;
		if (i == 2 && cnt != 5)
			ok = false;
	}
	if(ok)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}