#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int spaces = 2*n;
    int dig = 1;
    for(int i = 0; i < n; i++) {
        int ntoprint = 0;
        for(int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for(int j = 0; j < dig; j++) {
            if (j == dig-1)
                cout << ntoprint;
            else
                cout << ntoprint << ' ';
            if (j >= (dig/2))
                ntoprint--;
            else
                ntoprint++;
        }
        //cerr << "\t\t debug: " << (dig/2)+1;
        cout << endl;
        spaces -= 2;
        dig += 2;
    }
    int ntoprint = 0;
    for(int i = 0; i < 2*n+1; i++) {
        spaces = 0;
        if (i < 2*n)
            cout << ntoprint << ' ';
        else
            cout << ntoprint;
        if (i >=(n))
            ntoprint--;
        else
            ntoprint++;
    }
    cout << endl;
    spaces = 2;
    ntoprint = 0;
    dig -= 2;
    //cerr << "DIG IS " << dig << endl;
    for(int i = 0; i < n; i++) {
        ntoprint = 0;
        for(int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for(int j = 0; j < dig; j++) {
            if (j == dig-1)
                cout << ntoprint;
            else
                cout << ntoprint << ' ';
            if (j >= (dig/2))
                ntoprint--;
            else
                ntoprint++;
        }
        cout << endl;
        spaces += 2;
        dig -= 2;
    }
    
    
    
    
    
    
}