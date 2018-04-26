#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char cb[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> cb[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (cb[i][j] == '.') {
                if ((i == 0) && (j == 0) && cb[i+1][j] != 'W' && cb[i][j+1] != 'W')
                    cb[i][j] = 'W';
                else if ((i == 0) && (j == 0) && cb[i+1][j] != 'B' && cb[i][j+1] != 'B')
                    cb[i][j] = 'B';
                else if ((i == n-1) && (j == 0) && cb[i-1][j] != 'W' && cb[i][j+1] != 'W')
                    cb[i][j] = 'W';
                else if ((i == n-1) && (j == 0) && cb[i-1][j] != 'B' && cb[i][j+1] != 'B')
                    cb[i][j] = 'B';
                else if ((i == 0) && (j == m-1) && cb[i+1][j] != 'W' && cb[i][j-1] != 'W')
                    cb[i][j] = 'W';
                else if ((i == 0) && (j == m-1) && cb[i+1][j] != 'B' && cb[i][j-1] != 'B')
                    cb[i][j] = 'B';
                else if ((i == n-1) && (j == m-1) && cb[i-1][j] != 'W' && cb[i][j-1] != 'W')
                    cb[i][j] = 'W';
                //Check for edges
                else if ((i == 0) && (j != 0 && j != m-1) && cb[i][j-1] !='W' && cb[i][j+1] != 'W' && cb[i+1][j] != 'W')
                    cb[i][j] ='W';
                else if ((i == 0) && (j != 0 && j != m-1) && cb[i][j-1] !='B' && cb[i][j+1] != 'B' && cb[i+1][j] != 'B')
                    cb[i][j] ='B';
                else if ((j == 0) && (i != 0 && i != n-1) && cb[i][j+1] != 'W' && cb[i-1][j] != 'W' && cb[i+1][j] != 'W')
                    cb[i][j] = 'W';
                else if ((j == 0) && (i != 0 && i != n-1) && cb[i][j+1] != 'B' && cb[i-1][j] != 'B' && cb[i+1][j] != 'B')
                    cb[i][j] = 'B';
                else if ((i == n-1) && (j != 0 && j != m-1) && cb[i][j-1] !='W' && cb[i][j+1] != 'W' && cb[i-1][j] != 'W')
                    cb[i][j] ='W';
                else if ((i == n-1) && (j != 0 && j != m-1) && cb[i][j-1] !='B' && cb[i][j+1] != 'B' && cb[i-1][j] != 'B')
                    cb[i][j] ='B';
                else if ((j == m-1) && (i != 0 && i != n-1) && cb[i][j-1] != 'W' && cb[i-1][j] != 'W' && cb[i+1][j] != 'W')
                    cb[i][j] = 'W';
                else if ((j == m-1) && (i != 0 && i != n-1) && cb[i][j-1] != 'B' && cb[i-1][j] != 'B' && cb[i+1][j] != 'B')
                    cb[i][j] = 'B';
                else if (cb[i-1][j] != 'W' && cb[i+1][j] != 'W' && cb[i][j-1] != 'W' && cb[i][j+1] != 'W')
                    cb[i][j] = 'W';
                else if (cb[i-1][j] != 'B' && cb[i+1][j] != 'B' && cb[i][j-1] != 'B' && cb[i][j+1] != 'B')
                    cb[i][j] = 'B';
                
                
            }
                
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << cb[i][j];
        cout << endl;
    }
    
    
    
}
