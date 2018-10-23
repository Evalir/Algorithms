#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int sum = 0;
    int cnt = 0;
    while(s.size() >= 2) {
        cnt++;
        for (auto &t : s) {
            sum += t - '0';
        }
        s = to_string(sum);
        sum = 0;
    }
    cout << cnt << endl;
    return 0;
}