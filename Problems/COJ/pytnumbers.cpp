#include <iostream>
using namespace std;

int main() {
    
    while(true) {
        int a, b, c;
        cin >> a;
        if (a == 0)
            return 0;
            
        cin >> b >> c;
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
    
    return 0;
}
