#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int n4 = 0;
    bool hone = 0;
    
    for(int i = 0; i < n.size(); i++) {
        if (n[i] != '4' && n[i] != '1') {
            cout << "NO" << endl;
            return 0;
        }
        if (n[i] == '4' && !hone) {
            cout << "NO" << endl;
            return 0;
        }
        if (n[i] == '1') {
            hone = 1;
            n4 = 0;
        }
        if (n[i] == '4' && hone) {
            if (n4 == 1) {
                n4++;
                hone = 0;
            }
            else if (n4 < 2)
                n4++;
            else
                {
                    cout << "NO" << endl;
                    return 0;
                }
        }
    }
    
    cout << "YES" << endl;
    return 0;
    
}