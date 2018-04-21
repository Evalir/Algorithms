#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;

    int days[n];
    for(int i = 0; i < n; i++) {
        cin >> days[i];
    }

    if ((n == 1 && days[n-1] != 15) || (n==1 && days[n-1] != 1)) {
        cout << -1 << endl;
        return 0;
    }
    else if ((n == 1 && days[n-1] == 15) || (n==1 && days[n-1] == 1)) {
        cout << "DOWN" << endl;
        return 0;
    }
    else if (n == 1 && days[n-1] == 0) {
        cout << "UP" << endl;
        return 0;
    }
    else if (days[n-2] < days[n-1] && days[n-1] != 15) {
        cout << "UP" << endl;
        return 0;
    }
    else if (days[n-2] < days[n-1] && days[n-1] == 15) {
        cout << "DOWN" << endl;
        return 0;
    }
    else if (days[n-2] > days[n-1] && days[n-1] != 0) {
        cout << "DOWN" << endl;
        return 0;
    }
    else if (days[n-2] > days[n-1] && days[n-1] == 0) {
        cout << "UP" << endl;
    }

    return 0;
}