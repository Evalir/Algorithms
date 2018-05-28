#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    char arr[110][110];
    
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            arr[i][j]='a';
        }
    }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> arr[i][j];
            
    
    for(int i = 1; i <= n; i++) {
        bool ok = true;
        for(int j = 1; j <= m; j++) {
            int cnt = 0;
            if (arr[i][j] == '.') {
                if (arr[i-1][j] == '*')
                    ok = false;
                if (arr[i+1][j] == '*')
                    ok = false;
                if (arr[i][j-1] == '*')
                    ok = false;
                if (arr[i][j+1] == '*')
                    ok = false;
                if (arr[i-1][j-1] == '*')
                    ok = false;
                if (arr[i+1][j+1] == '*')
                    ok = false;
                if (arr[i-1][j+1] == '*')
                    ok = false;
                if (arr[i+1][j-1] == '*')
                    ok = false;
                
                if (!ok) {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else if (arr[i][j] != '*' && arr[i][j] != '.') {
                int dig = arr[i][j] - '0';
                //cerr << dig << endl;
                cnt = 0;
                if (arr[i-1][j] == '*')
                    cnt++;
                if (arr[i+1][j] == '*')
                    cnt++;
                if (arr[i][j-1] == '*')
                    cnt++;
                if (arr[i][j+1] == '*')
                    cnt++;
                if (arr[i-1][j-1] == '*')
                    cnt++;
                if (arr[i+1][j+1] == '*')
                    cnt++;
                if (arr[i-1][j+1] == '*')
                    cnt++;
                if (arr[i+1][j-1] == '*')
                    cnt++;
                
                if (cnt == dig)
                    ok = true;
                else if (cnt != dig) {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    
    cout << "YES" << endl;
    return 0;
    
}