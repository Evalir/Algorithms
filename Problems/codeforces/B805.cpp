#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        if (i & 2) S += 'b';
        else S += 'a';
    }

    cout << S << endl;
}