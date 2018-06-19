#include <bits/stdc++.h>
using namespace std;

using ll = long long;
vector<ll> divy;
ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b) {
	return (a*b)/(gcd(a,b));
}

ll countAll(int L, int R, int x, int y)
{
    L = (L + x - 1) / x;
    R = R/ x;
 
    int ans = 0;
    for (int i = L; i <= R; i++)
        for (int j = L; j <= R; j++)
            if (gcd(i, j) == 1 && lcm(i,j) == y)
                ans++;
 
    return ans;
}
 
// Driven Program
int main()
{
    ll l,r,x,y;
    cin >> l >> r >> x >> y;
    for(int i = 2; i*i <= y; i++)
    	if (y % i == 0)
    		divy.push_back(i);
    int ans = 0;
    int n = divy.size();
    for(int i = 0; i < (int)divy.size()/2; i++) {
    	if (gcd(divy[i],divy[n-1-i]) == x && lcm(divy[i],divy[n-1-i]) == y)
    		ans++;
    }            
    cout << ans << endl;
    return 0;
}