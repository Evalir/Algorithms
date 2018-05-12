#include <iostream>
#include <string>
using namespace std;

int main() {
    string S = "abababzx";
    
    for(int i = 0; i < S.size(); i++) {
        if (S[i] == 'a') {
            S[i] = 'x';
        }
    }
    cout << S[S.size()-1] << endl;
    cout << S << endl;
    
    return 0;
}
