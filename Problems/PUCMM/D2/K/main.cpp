#include <bits/stdc++.h>
using namespace std;
using Long = long long;
string arr;
void rotate() {
    string ns = "";
    for(int i = 1; i < arr.size(); i++) ns += arr[i];
    ns += arr[0];
    arr = ns;
}

int main() {
    Long n, m;
    cin >> n >> m;
    while(m--) {
        Long num, k;
        cin >> num >> k;
        k %= n;
        arr = "";
        while(num) {
            arr += (num % 2 == 0) ? '0' : '1';
            num /= 2;
        }
        reverse(arr.begin(), arr.end());
        while(arr.size() < n) {
            arr = '0' + arr;
        }
        for(int i = 0; i < k; i++)
            rotate();
        num = 0;
        Long pt = 0;
        for(int i = arr.size()-1; i >= 0; i--) {
            num += (1LL << pt)*(arr[i]-'0')*1LL;
            pt++;
        }
        cout << num << endl;

    }

    return 0;
}