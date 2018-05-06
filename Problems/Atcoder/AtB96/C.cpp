#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

char grid[100][100];
int ch[100][100];
int h,w;

int main() {
    cin >> h >> w;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> grid[i][j];
        }
    }
    
    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++) {
            ch[i][j] = 0;
            if (grid[i][j] == '#')
                ch[i][j] = 0;
            else
                ch[i][j] = -1;
        }
    
    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++) {
            if (j != 0 && grid[i][j-1] == '#' && grid[i][j] == '#')
                ch[i][j]++;
            if (j != w-1 && grid[i][j+1] == '#' && grid[i][j] == '#')
                ch[i][j]++;
            if (i != 0 && grid[i-1][j] == '#' && grid[i][j] == '#')
                ch[i][j]++;
            if (i != h-1 && grid[i+1][j] == '#' && grid[i][j] == '#')
                ch[i][j]++;
        }
        
    bool ans = 1;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            //cerr <<ch[i][j] << ' ';
            if (ch[i][j] != -1 && ch[i][j] < 1)
                ans = 0;
                
        }
        //cerr << endl;
    }
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
