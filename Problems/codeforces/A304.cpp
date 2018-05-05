#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int counter = 0;
    for(int a = 1; a <= n; a++) {
        for(int b = a; b <= n; b++) {
            int c = sqrt((a*a)+(b*b));
            if (sqrt(c) <= n) {
                counter++;
                cout << "TRUE ON " << a << ' ' << b << " = " << c << endl;
            }
        }
    }
    cout << counter << endl;
    return 0;
}