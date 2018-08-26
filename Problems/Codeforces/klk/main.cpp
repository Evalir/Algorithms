#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    for(int i = 0; i < 100; i++) {
        int x;
        cin >> x;
        if (x != -1)
            sum += x;
        else
            break;
    }
    cout << sum << " is " << endl;
    return 0;
}