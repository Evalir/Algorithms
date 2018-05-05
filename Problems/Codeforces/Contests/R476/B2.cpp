#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    char arr[n+10][n+10];
    int score[n+10][n+10];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            score[i][j] = 0;
            
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    bool shc = k % 2 == 0 ? 0 : 1;
    int ans = 0;
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < n; j++) {
                if (j+(k-1) <= n-1) {
                    bool c = 1;
                    for(int idx = j; idx <= j+(k-1); idx++) {
                        if (arr[i][idx] == '#')
                            c = 0;
                    }
                    if (c)
                        score[i][j]++;
                }
                if (j-(k-1) >= 0) {
                    bool c = 1;
                    for(int idx = j; idx >= j-(k-1); idx--) {
                        if (arr[i][idx] == '#')
                            c = 0;
                    }
                    if (c)
                        score[i][j]++;
                }
                if (i+(k-1) <= n-1) {
                    bool c = 1;
                    for(int idx = i; idx <= i+(k-1); idx++) {
                        if (arr[idx][j] == '#') 
                            c = 0;
                    }
                    if (c)
                        score[i][j]++;
                }
                if (i-(k-1) >= 0) {
                    bool c = 1;
                    for(int idx = i; idx >= i-(k-1); idx--) {
                        if (arr[idx][j] == '#')
                            c = 0;
                    }
                    if (c)
                        score[i][j]++;
                }
                
                if(shc) {
                    int chk = k/2;
                    if (j+chk <= n-1 && j-chk >= 0) {
                        bool c = 1;
                        for(int idx = j; idx <= j+chk; idx++) {
                            if (arr[i][idx] == '#')
                                c = 0;
                        }
                        for(int idx = j; idx >= j-chk; idx--) {
                            if (arr[i][idx] == '#')
                                c = 0;
                        }
                        if (c)
                            score[i][j]++;
                    }
                    if (i+chk <= n-1 && i-chk >= 0) {
                        bool c = 1;
                        for(int idx = i; idx <= i+chk; idx++) {
                            if (arr[idx][j] == '#')
                                c = 0;
                        }
                        for(int idx = i; idx >= i-chk; idx--) {
                            if (arr[idx][j] == '#')
                                c = 0;
                        }
                        if (c)
                            score[i][j]++;
                    }
                }
                else {
                    int chk = k/2;
                    if (j+chk <= n-1 && j-(chk-1) >= 0) {
                        bool c= 1;
                        for(int idx = j; idx <= j+chk; idx++) {
                            if (arr[i][idx] == '#')
                                c = 0;
                        }
                        for(int idx = j; idx >= j-(chk-1); idx--) {
                            if (arr[i][idx] == '#')
                                c = 0;
                        }
                        if (c)
                            score[i][j]++;
                        
                    }
                    if (j+(chk-1) <= n-1 && j-chk >= 0) {
                        bool c = 1;
                        for(int idx = j; idx <= j+(chk-1); idx++) {
                            if (arr[i][idx] == '#')
                                c = 0;
                        }
                        for(int idx = j; idx >= j-(chk); idx--) {
                            if (arr[i][idx] == '#')
                                c = 0;
                        }
                        if (c)
                            score[i][j]++;
                    }
                    if (i-chk >= 0 && i+(chk-1) <= n-1) {
                        bool c = 1;
                        for(int idx = i; idx <= i+(chk-1); idx++) {
                            if (arr[idx][j] == '#')
                                c = 0;
                        }
                        for(int idx = i; idx >= i-chk; idx--) {
                            if (arr[idx][j] == '#')
                                    c = 0;
                        }
                        if (c)
                            score[i][j]++;
                    }
                    if (i-(chk-1) >= 0 && i+chk <= n-1) {
                        bool c = 1;
                        for(int idx = i; idx <= i+(chk); idx++) {
                            if (arr[idx][j] == '#')
                                c = 0;
                        }
                        for(int idx = i; idx >= i-(chk-1); idx--) {
                            if (arr[idx][j] == '#')
                                    c = 0;
                        }
                        if (c)
                            score[i][j]++;
                    }
                }
            }
    int x = 0,y = 0;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            if (score[i][j] > ans) {
                y = i;
                x = j;
                ans = score[i][j];
            }
        }
        
        cout << y+1 << ' ' << x+1 << endl;
        return 0;
}
