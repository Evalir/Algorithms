#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		int arr[n+10];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		bool isb = false;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if (i == j)
					continue;
				else 
					{
						for(int k = 0; k < n; k++) {
							if (arr[i]*arr[j] == arr[k]) {
								isb = true;
								break;
							}
						}
					}
					if (isb)
						continue;
					else {
						cout << "no" << endl;
						break;
					}
			}
			if (!isb)
				break;
		}
		if (isb)
			cout << "yes" << endl;
		
	}
}
