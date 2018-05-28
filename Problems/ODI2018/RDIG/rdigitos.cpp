#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string A;
        cin >> A;
        bool in = 0;
        if (A[0] == '-')
            in = 1;
        if (A == "0") {
            cout << "0" << endl;
            continue;
        }
        if (in) {
            A.erase(A.begin());
            sort(A.begin(), A.end(),greater<int>());
            cout << '-' << A;
            cout << endl;
        }
        else {
            int nz = 0;
            for(int i = 0; i < A.size(); i++) {
                if (A[i] == '0')
                    nz++;
            }
            string ns;
            for(int i = 0; i < A.size(); i++)
                if (A[i] != '0')
                    ns += A[i];
            sort(ns.begin(), ns.end());
            
            cout << ns[0];
            for(int i = 0; i < nz; i++)
                cout << '0';
            for(int i = 1; i < ns.size(); i++)
                if (ns[i] != '0')
                    cout << ns[i];
            cout << endl;
        }
    }
    return 0;
}
