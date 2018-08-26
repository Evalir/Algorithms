#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
using namespace std;

const int mod = 1000003;

long long kpow(int j) {
    int k = 1;
    for(int i = 0; i < j; i++) {
        k *= 2;
        k %= mod;
    }
    return k;
}
int main() {
    string S, B;
    cin >> S;
    for(auto t : S) {
        if (t == '>') B += "1000";
        else if (t == '<') B += "1001";
        else if (t == '+') B += "1010";
        else if (t == '-') B += "1011";
        else if (t == '.') B += "1100";
        else if (t == ',') B += "1101";
        else if (t == '[') B += "1110";
        else if (t == ']') B += "1111";
    }
    long long ans = 0;
    reverse(B.begin(), B.end());
    for(int i = 0; i < B.size(); i++) {
        long long x = kpow(i);
        if (B[i] != '0') {
            x %= mod;
            ans += x;
            ans %= mod;
        }
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}