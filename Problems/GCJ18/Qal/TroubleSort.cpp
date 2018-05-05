#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1e9+7
#define EPS	-1e9-7
using namespace std;

vector<long> TroubleSort(vector<long>& arr) {
	bool done = false;
	while(!done) {
		done = true;
		for(int i = 0; i < arr.size()-2; i++) {
			if (arr[i] > arr[i+2]) {
				done = false;
				//reverse
				//cerr << arr[i] << ' ' << arr[i+1] << ' ' << arr[i+2] << " normal" << endl;
				long md = arr[i];
				arr[i] = arr[i+2];
				arr[i+2] = md;
				//cerr << arr[i] << ' ' << arr[i+1] << ' ' << arr[i+2] << " reverse" << endl;
			}
		}
	}

	return arr;
}

int main() {
	int T;
	int cs=  1;
	cin >> T;
	while(T--) {
		int n;
		bool fd = 0;
		cin >> n;
		vector<long> arr(n);
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		arr = TroubleSort(arr);

		for(int i = 0; i < n-1; i++) {
			if (arr[i] > arr[i+1]) {
				cout << "Case #" << cs << ": " << i << endl;
				fd = 1;
				break;
			}
		}
		if (!fd)
			cout << "Case #" << cs << ": OK" << endl;
		cs++;
	}
	return 0;
}