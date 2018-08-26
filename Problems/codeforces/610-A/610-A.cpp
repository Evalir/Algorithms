#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n & 1) {puts("0"); return 0;}
    else {
        if (n % 4 == 0) printf("%d",(n/4)- 1);
        else printf("%d",n/4);
    }
    return 0;
}             