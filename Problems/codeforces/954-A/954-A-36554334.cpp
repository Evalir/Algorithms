#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int mans = 0;
    for(int i = 0; i < N-1; i++) {
        if ((S[i] == 'U' && S[i+1] == 'R') || (S[i] == 'R' && S[i+1] == 'U')) {
            mans++;
            S[i] = '-';
            S[i+1] = '-';
        }
    }   
    cout << N-mans << endl;
    return 0;
}