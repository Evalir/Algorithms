#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    scanf("%d", &n);
    char buf[110];
    scanf("%s", buf);
    s = buf;
    int sum = 0;
    for(int i = 0; i < n; i++) sum += s[i]-'0';
    for(int i = 2; i <= n; i++) {
        if (sum % i == 0) {
            cout << i << " divides " << sum << endl;
            int cnt = sum / i;
            int pf = 0;
            int sm = 0;
            for(int j = 0; j < n; j++) {
                sm += s[j]-'0';
                if (sm == cnt) sm = 0, pf++;
            }
            cout << sm << " " << pf << endl;
            if (pf == i) {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}