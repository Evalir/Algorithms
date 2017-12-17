#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        string S;
        cin >> S;
        //if it's one and o is wrong
        if (S.size() == 3 && S[1] == 'n' && S[2] == 'e') cout << 1 << endl;
        else if (S.size() == 3 && S[0] == 'o' && S[2] == 'e') cout << 1 << endl;
        else if (S.size() == 3 && S[0] == 'o' && S[1] == 'n') cout << 1 << endl;
        else if (S.size() == 3 && S[0] == 't' && S[1] == 'w') cout << 2 << endl;
        else if (S.size() == 3 && S[0] == 't' && S[2] == 'o') cout << 2 << endl;
        else if (S.size() == 3 && S[1] == 'w' && S[2] == 'o') cout << 2 << endl;
        else if (S.size() == 5) cout << 3 << endl;
    }

    return 0;
}