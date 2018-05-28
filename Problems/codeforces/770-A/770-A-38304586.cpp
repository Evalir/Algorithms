#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> dic = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int n,k;
    cin >> n >> k;
        for(int i = 0; i < k; i++) {
            cout << dic[i];        
            n--;
        }
    bool alt = 1;
    while(n--) {
        if (alt)
            cout << 'a';
        else
            cout << 'b';
        alt = !alt;
    }
    return 0;
}