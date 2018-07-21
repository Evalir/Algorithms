#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    string S;
    cin >> S;
    for(int i = 0; i < (int)S.size(); i++) {
        if ((S[i] - '0') % 8 == 0) {
            puts("YES");
            cout << S[i] << endl;
            return 0;
        }
        for (int j = i+1; j < (int) S.size(); j++) {
            int z = ((S[i]-'0')*10) + S[j]-'0';
            if (z % 8 == 0) {
                puts("YES");
                cout << z << endl;
                return 0;
            }
            for (int k = j+1; k < (int) S.size(); k++) {
                if (i != j && i != k && j != k) {
                    int n = 0;
                    n = n + (S[i] - '0');
                    n *= 10;
                    n += S[j] - '0';
                    n *= 10;
                    n += S[k] - '0';
                    if (n % 8 == 0) {
                        puts("YES");
                        cout << n << endl;
                        return 0;
                    }
                }
            }
        }
    }
    puts("NO");
    return 0;
}