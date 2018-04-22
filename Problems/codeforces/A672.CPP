#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string dig;
    int n;
    cin >> n;
    for(int i = 0; i  <= 370; i++) {
        dig += (to_string(i));
    }

    cout << dig[n] << endl;
    return 0;
}