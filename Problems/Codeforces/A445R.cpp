#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char arr[n+10][m+10];
    int goodcol[n+10];
    for(int i = 0; i < n; i++) {
        int gsum = 0;
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == '.')
                gsum++;
        }
        goodcol[i] = gsum;
    }
    
    bool place = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (arr[i][j] == '.') {
                place ? arr[i][j] = 'B' : arr[i][j] = 'W';
                if (j != m-1 && arr[i][j+1] != '-')
                    place ? place = 0 : place = 1;
            }
        }
        if (goodcol[i] % 2 == 0)
            place ? place = 0 : place = 1;
        if (i != 0 && arr[i-1][0] == 'W')
            place = 1;
        else
            place = 0;
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
