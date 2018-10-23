#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
    vector<Long> fib;
    Long x, y;
    x = y = 1;
    int cnt = 0;
    while(++cnt < 91) {
        fib.push_back(x+y);
        Long t = x+y;
        x = y;
        y = t;
    }
    Long n;
    cin >> n;
    for(int i = 0; i < (int)fib.size(); i++)
        if (fib[i+1] > n) {
            cout << i+1 << endl;
            return 0;
        }
    return 0;
}