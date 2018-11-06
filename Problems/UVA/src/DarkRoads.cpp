#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using VI = vector<int>;
using VVI = vector<VI>;
#define SZ 4
int n;
Long mem[1 << 18];
int a[SZ];
int cost[1 << SZ];
const int mod = (int)1e9 + 7;
//const int INF = 1 << 30;


int getpd(int mask) {
	int pd = 1;
	for(int i = 0; i < SZ; i++) {
		if (mask & (1 << i)) pd *= a[i];
	}
	return pd;
}
void precompute() {
	for(int i = 0; i < (1 << SZ); i++) {
		for(int j = 0; j < SZ; j++) {
			int bitcnt = __builtin_popcount(i);
			int pd = getpd(i);
			cout << "bitcnt " << bitcnt << " " << pd << " pr" << endl;
			cost[i | j] = cost[i] + bitcnt*pd + a[j];
		}
	}
}

int getcost(int A, int B) {
	return cost[A | B];
}
int concat(int A, int B) {
	return (A | B);
}
Long bf(VI G) {
    Long w = 1000000000000000000LL;
    for (int i = 0; i < G.size(); ++i) {
        for (int j = i+1; j < G.size(); ++j) {
            VI NG;
            for (int k = 0; k < G.size(); ++k) {
                if (k == i || k == j) continue;
                NG.push_back(G[k]);
            }
            Long t = getcost(G[i], G[j]);
            NG.push_back(concat(G[i], G[j]));
            w = min(w, t + bf(NG));
        }
    }
    return w;
}

int main() {
	for(int i = 0; i < SZ; i++) a[i] = i + 1;
	precompute();
	for(int i = 0; i < 16; i++) {
		cout << "cost of mask " << i << " : " << cost[i] << endl;
	}
	vector<int> V = {1,2,3,4};
	Long res = bf(V);
	cout << res << endl;
	return 0;
}
