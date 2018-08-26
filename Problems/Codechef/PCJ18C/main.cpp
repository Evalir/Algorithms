#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;
using ll = long long;

inline ll gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    int T;
    cin >> T;
    while(T--) {
        ll N, A, K;
        cin >> N >> A >> K;
        K--;//(2(180 * (N-2)) - A*N) / (N*(N-1))
        ll a = (A*(N*(N-1))) + (2*((180 * (N-2)) - A*N))*K;
        ll b = (N*(N-1));
        cout << a/gcd(a,b) << ' ' << b / gcd(a,b) << endl;

    }
    return 0;
}