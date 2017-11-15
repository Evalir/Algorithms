#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    long cA = 0, cD = 0;
    int x;
    cin >> x;
    string games;
    cin >> games;

    for(int i = 0; i < x; i++) {
        if (games[i] == 'A') cA++;
        else cD++;
    }

    if (cA > cD) cout << "Anton" << endl;
    else if (cA == cD) cout << "Friendship" << endl;
    else cout << "Danik" << endl;
    
    return 0;
}