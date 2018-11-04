#include <bits/stdc++.h>
using namespace std;
using Long = long long;

bool isPrime[20010];
void Sieve() {
    for(int i = 2; i <= 20000; i++) {
        if(!isPrime[i]) {
            for(int j = i + i; j <= 20000; j += i) {
                isPrime[j] = true;
            }
        }
    }
}

int dist[10010];

vector<int> toV(int num) {
	vector<int> res;
	while(num) {
		res.push_back(num % 10);
		num /= 10;
	}
	reverse(res.begin(),res.end());
	return res;
}

int toNum(vector<int> &V) {
	int res = 0;
	for(int i = 0; i < V.size(); i++) res = res * 10 + V[i];
	return res;

}

const int INF = 1 << 30;
int bfs(int src, int dst) {
	for(int i = 0; i <= 10000; i++) dist[i] = INF;
	dist[src] = 0;
	queue<int> Q;
	Q.push(src);
	while(!Q.empty()) {
		int u = Q.front(); Q.pop();
		for(int i = 0; i <= 3; i++) {
			vector<int> cur = toV(u);
			for(int dgt = (i ? 0 : 1); dgt <= 9; dgt++) {
				cur[i] = dgt;
				int nxt = toNum(cur);
				if (!isPrime[nxt] && dist[nxt] == INF && nxt >= 1000) {
					dist[nxt] = dist[u] + 1;
					Q.push(nxt);
				}
			}
		}
	}
	return dist[dst];
}

int main() {
	Sieve();
	int t;
	scanf("%d", &t);
	while(t--) {
		int a, b;
		scanf("%d%d", &a, &b);
		int ans = bfs(a,b);
		if (ans == INF) printf("Impossible\n");
		else printf("%d\n", ans);
	}
}
