#include <bits/stdc++.h>
using namespace std;
//conio
int main() {
    string S, NS = "";
    cin >> S;
    int on = 0;
    for(int i = 0; i < S.size(); i++) {
        if (S[i] == '1') on++;
        else NS += S[i];
    }
    bool ok = true;
    
    for(int i = 0; i < NS.size(); i++) {
        if (NS[i] != '2') cout << NS[i];
        else if (NS[i] == '2' && ok) {
            while(on--)
                cout << '1';
            cout << 2;
            ok = false;
        }
        else if (NS[i] == '2' && !ok)
            cout << NS[i];

    }
    if (ok)
        while(on--)
            cout << '1';
    puts("");

    return 0;
}