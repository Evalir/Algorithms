#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;
    bool a = false, b = false, c = false;
    if (S[0] == 'A') a = true;
    int countC = 0;
    for(int i = 2; i <= S.size()-2; i++) {
        if (S[i] == 'C') countC++;
    }
    for(int i = 0; i < S.size(); i++) {
        if (S[i] >= 65 && S[i] <= 96 && S[i] != 'A' && S[i] != 'C')
            c = true;
    }

    if (a && !c && countC == 1) {
        cout << "AC" << endl;
    }
    else {
        cout << "WA" << endl;
    }
    return 0;
}