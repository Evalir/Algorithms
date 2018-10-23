#include <bits/stdc++.h>
#define ALL(X) X.begin(), X.end()
#define SZ(A) int((A).size())
#define RALL(X) X.rbegin(), X.rend()
#define FOR(B) for (size_t i = 0; i < B; i++)
#define FOR2(B) for (size_t j = 0; j < B; j++)
#define FORE(B) for (size_t i = 1; i <= B-1; i++)
#define FORC(A, B) for (size_t i = A; i < B; i++)
#define PRINT(X) cout << X << endl
#define PRINTALL(E, X) { FOR(X) {cout << E[i] << endl; } }
#define PRINTSIDE(E, X) { FOR(X) {cout << E[i] << " ";} }
#define READALLI(V, N) FOR(N) {int x; cin >> x; V.push_back(x); }
#define READALL(V, N) FOR(N) {LL x; cin >> x; V.push_back(x); }
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAXN 100000
#define SQRSIZE  317
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll>VL;
typedef vector<pii> vpii;
typedef map<int, int> mii;
typedef map<char, int>mci;
typedef map<string, int> msi;
typedef set<int> si;
const int INF = (1 << 30);
typedef unsigned long long ull;
int main(){

    int T = 0;
    scanf("%d", &T);
    int cnt = 0;
    while(T-->0) {
        cnt++;
        ull I,R;
        ull F;
        scanf("%llu%llu", &I,&R);
        scanf("%llu", &F);
        double rr = R*1.00/100.0;
        printf("Case %d: %llu\n",cnt,(ull)ceil(log(F/I*1.00)/log(1.00 +rr)));
    }

    return 0;
}