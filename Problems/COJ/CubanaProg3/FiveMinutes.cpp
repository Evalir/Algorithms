#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    if (S >= "07:00" && S < "07:44") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else if (S >= "07:50" && S < "08:35") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else if (S >= "08:40" && S < "09:25") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else if (S >= "09:30" && S < "10:15") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else if (S >= "10:20" && S < "11:05") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else if (S >= "11:10" && S < "11:55") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else if (S >= "01:00" && S < "01:45") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else if (S >= "01:50" && S < "02:35") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else if (S >= "02:40" && S < "03:25") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else if (S >= "03:30" && S < "04:15") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else if  (S >= "04:20" && S < "05:05") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else if (S >= "05:10" && S < "05:55") {
        cout << "Students, Surprise Quiz!" << endl;
    }
    else
            cout << "Students, you may go out." << endl;
    return 0;
}
