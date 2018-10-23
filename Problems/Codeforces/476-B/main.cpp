#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    char buf[15];
    scanf("%s", buf);
    a = buf;
    scanf("%s", buf);
    b = buf;
    int x,y,cnt;
    x = y = 0;
    cnt = 1;
    char ls = 'x';
    for(auto i : a) {
        if (i == '+') x++;
        if (i == '-') y++;
    }
    for(int i = 0; i < (int)b.size(); i++) {
        if (b[i] == '+') x--;
        if (b[i] == '-') y--;
        if (b[i] == '?') {
            if (ls == 'x') {
                ls = a[i];
            } else {
                cnt <<= 1;
            }
        }
        if (ls != 'x') ls = a[i];
    }
    cout << cnt << endl;
    if (cnt == 1 && y == 0 && x == 0) {
        printf("1.0000000000\n");
    } else if (x < 0 || y < 0 || x + y > cnt) {
        printf("%.10lf", 0.00);
    } else {
        printf("%.10lf", 1.00/cnt);
    }

    return 0;
}