#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    while(T--) {
        char S;
        cin >> S;
        if (S == 'S') {
            int k;
            cin >> k;
            for(int i = 0; i < k; i++) {
                for(int j = 0;j < k; j++) {
                    cout << '*';
                }
                cout << endl;
            }
            cout << endl;
        }
        else if (S == 'R') {
            int k,l;
            cin >> k >> l;
            for(int i = 0; i < l; i++) {
                for(int j = 0; j < k; j++) {
                    cout << '*';
                }
                cout << endl;
            }
            cout << endl;
        }
        else if (S == 'D') {
            int k;
            cin >> k;
            int at = 1;
            int spz = (k-at)/2;
            for(int i = 0; i < k/2; i++) {
                for(int j = 0; j < spz; j++) {
                   cout << '.'; 
                }
                for(int j = 0; j < at; j++) {
                    cout << '*';
                }
                for(int j = 0; j < spz; j++) {
                    cout << '.';
                }
                at += 2;
                spz--;
                cout << endl;
            }
            for(int i = 0; i < k; i++)
                cout << '*';
            cout << endl;
            for(int i = 0; i < k/2; i++) {
                at -= 2;
                spz++;
                for(int j = 0; j < spz; j++) {
                    cout << '.'; 
                }
                for(int j = 0; j < at; j++) {
                    cout << '*';
                }
                for(int j = 0; j < spz; j++) {
                    cout << '.';
                }
                cout << endl;
            }
        }
        else if (S == 'T') {
            int base;
            cin >> base;
            int spz = (base-1)/2;
            int at = 1;
            for(int i = 0; at <= base; i++) {
                for(int j = 0; j < spz; j++)
                    cout << '.';
                for(int j = 0; j < at; j++)
                    cout << '*';
                for(int j = 0; j < spz; j++)
                    cout << '.';
                at += 2;
                spz--;
                cout << endl;
            }
        }
        
    }
}
