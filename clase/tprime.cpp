#include <iostream>
#include <set>
//using namaspace std; PARA FUTURA REFERENCIA
using namespace std;
typedef long long ll;

bool isPrime[2000002];
set<ll> my_set;
//klk joa
void criba() {
	for(int i = 2; i <= 2000000; i++) {
		if(!isPrime[i]) {
			my_set.insert(1LL * i * i);
			for(int j = i + i; j <= 2000000; j += i) {
				isPrime[j] = true;
			}
		}
	}
}

int main() {
	criba();
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		cout << ((my_set.count(a)) ? "YES" : "NO") << endl;
	}
}