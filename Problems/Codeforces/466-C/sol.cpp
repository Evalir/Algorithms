#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
	int n;
	cin >> n;
	vector<Long> V(n), C(n), PS(n);
	Long ans = 0;
	Long sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> V[i];
		sum += V[i];
	}
	if (sum % 3) {
		cout << 0 << endl;
		return 0;
	} else {
		sum /= 3LL;
		Long ns = 0;
		for(int i = n - 1; i >= 0; i--) {
			ns += V[i];
			if (ns == sum) C[i] = 1LL;
		}
		Long ps = 0;
		for(int i = n - 2; i >= 0; i--) C[i] += C[i + 1];
		ns = 0;
		for(int i = 0; i + 2 < n; i++) {
			ns += V[i];
			if (ns == sum) ans += C[i + 2];
		}
	}
	cout << ans << endl;
	return 0;
}
