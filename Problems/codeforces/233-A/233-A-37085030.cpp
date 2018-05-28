#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 2 != 0)
	{
		cout << -1 << endl;
		return 0;
	}

	int arr[n+10];
	for(int i = 0; i < n; i++) {
		arr[i] = i+1;
	}

	for(int i = 0; i < n-1; i++) {
		if(i == 0 || i % 2 == 0){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}

	for(int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}