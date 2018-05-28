#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> days;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        days.push_back(x);
    }

    if ((n == 1 && days[0] == 15)) {
        cout << "DOWN" << endl;
        return 0;
    }
    else if (n == 1 && days[0] == 0) {
        cout << "UP" << endl;
        return 0;
    }
    else if (days[n-2] < days[n-1] && days[n-1] != 15 && n - 1) {
        cout << "UP" << endl;
        return 0;
    }
    else if (days[n-2] < days[n-1] && days[n-1] == 15 && n != 1) {
        cout << "DOWN" << endl;
        return 0;
    }
    else if (days[n-2] > days[n-1] && days[n-1] != 0 && n != 1) {
        cout << "DOWN" << endl;
        return 0;
    }
    else if (days[n-2] > days[n-1] && days[n-1] == 0 && n != 1) {
        cout << "UP" << endl;
    }
    else {
        cout << "-1" << endl;
    }
    return 0;
}