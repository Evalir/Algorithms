#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string row;
    
    for(int i = 0; i < n; i++) {
        cin >> row;
        for(int j = 0; j < m; j++) {
            if (row[j] == '.') {
                if ((i + j) & 1) //tf is that?
                    row[j] = 'W';
                else
                    row[j] = 'B';
            }
        }
        cout << row << endl;
    }
    
    return 0;
}