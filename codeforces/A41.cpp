// Problem A41 codeforces
// Created by Enrique Ortiz on 9/30/17.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string t;
    string reverset;

    cin >> s >> t;

    for (int i = t.length() - 1; i >= 0; i--){

        reverset += t[i];
    }

    if (reverset == s) cout << "YES" << endl;
    else cout << "NO" << endl;

}
