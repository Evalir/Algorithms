#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

unsigned int rpowmod(unsigned long long x, unsigned long long n, unsigned int m) {
   if (n == 0) return 1 % m;
   return (n & 1) ?
      (rpowmod((x*x) % m, n/2, m) * x) % m :
       rpowmod((x*x) % m, n/2, m);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int ans = rpowmod(a,b,10);
        cout << ans << endl;
        
    }
    return 0;
}
