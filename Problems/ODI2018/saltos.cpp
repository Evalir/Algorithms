#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> mar,ju;
    vector<int> rm, rj;
    pair<int,int> met;
    met.first = -1;
    met.second = -1;
    for(int i = 0; i < n; i++) {
        if (i == 0)
            mar.push_back(1);
        else
            mar.push_back(mar[i-1]+x);
            
        //cerr << "mar " << mar[i] << endl;
    }
    for(int i = 0; i < n; i++) {
        if (i == 0)
            ju.push_back(n);
        else
            ju.push_back(ju[i-1]-y);
        //cerr << "ju " << ju[i] << endl;
    }
        int k = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                if (mar[i] == ju[j])
                    k++;
        cout << k << endl;
    
    for(int i = 0; i < min(mar.size(), ju.size()); i++) {
        if (i != 0) {
            if (mar[i] == ju[i-1]) {
                met.first = i;
                met.second = i-1;
            }
            if (mar[i] == ju[i]) {
                met.first = i;
                met.second = i;
            }
        }
        else
            if (mar[i] == ju[i]) {
                met.first = i;
                met.second = i;
            }
    }
    
    
    if (met.first != -1 && met.second != -1) {
        for(int i = 0; i <= met.first; i++) {
            if (i != mar.size()-1)
                cout << mar[i] << ' ';
            else
                cout << mar[i];
        }
        cout << endl;
        for(int i = 0; i <= met.second; i++) {
            if (i != rj.size()-1)
                cout << ju[i] << ' ';
            else
                cout << ju[i];
        }
    }
    else {
        cout << "IMPOSIBLE" << endl;
    }
    
    return 0;
}
