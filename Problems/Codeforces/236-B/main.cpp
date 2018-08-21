#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> precompute() {
    vector<int> ans(1e6+10);
    for(int i = 1; i <= (int)1e6; i++) {
        int cnt = 0;
        for(int j = i; j >= 1; j--) {
            if (i % j == 0)
                cnt++;
        }
        ans[i] = cnt;
    }
    return ans;
}

int main() {
    vector<int> d = precompute();
    long long ans = 0;
    long long cnt = 0;
    const long long mod = 1 << 30;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    for(long long i = 1; i <= a; i++) {
        for(long long j = 1; j <= b; j++) {
            for(long long k = 1; k <= c; k++) {
                ans = (i*j*k) % mod;
                cnt += d[ans] % mod;
                cnt %= mod;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}