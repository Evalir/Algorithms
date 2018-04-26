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
            cin >> arr[i][j];
    bool shc = k % 2 == 0 ? 0 : 1;
    int ans = 0;
    if (shc) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if (i == 0 && j != 0 && j != n-1) {
                
                }
                else if (i == n-1 && j != 0 && j != n-1) {
                
                }
                else if (i != 0 && i != n-1 && j == 0) {
                    
                }
                else if (i != 0 && i != n-1 && j == n-1) {
                    
                }
                
                else if (i == 0 && j == 0) {
                    
                }
                else if (i == 0 && j == n-1) {
                    
                }
                else if (i == n-1 && j == 0) {
                    
                }
                else if (i == n-1 && j == n-1) {
                    
                }
                else {
                
                }
            }
        }        
    }
    else if(!shc){
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if (i == 0 && j != 0 && j != n-1 && arr[i][j] == '.') {
                    //check left
                    if (j >= k-1) {
                        bool c = 1;
                        for(int idx = j; idx >= j-(k-1); idx--) {
                            if (arr[i][idx] == '#')
                                c = 0;
                        }
                        if (c)
                            score[i][j]++;
                    }
                    //cjeck right
                    if (j+(k-1) <= n-1) {
                        bool c = 1;
                        for(int idx = j; idx <= j+(k-1); idx++) {
                            if (arr[i][idx] == '#')
                                c = 0;
                        }
                        if (c)
                            score[i][j]++;
                    }
                    bool c = 1;
                    for(int idx = i; idx <= i+(k-1); idx++) {
                        if (arr[idx][j] == '#')
                            c = 0;
                    }
                    if (c)
                        score[i][j]++;
                }
                //abajo medio
                else if (i == n-1 && j != 0 && j != n-1 && arr[i][j] == '.') {
                    //check left
                    if (j >= k-1) {
                        bool c = 1;
                        for(int idx = j; idx >= j-(k-1); idx--) {
                            if (arr[i][idx] == '#')
                                c = 0;
                        }
                        if (c)
                            score[i][j]++;
                    }
                    //cjeck right
                    if (j+(k-1) <= n-1) {
                        bool c = 1;
                        for(int idx = j; idx <= j+(k-1); idx++) {
                            if (arr[i][idx] == '#')
                                c = 0;
                        }
                        if (c)
                            score[i][j]++;
                    }
                    bool c = 1;
                    for(int idx = i; idx >= i-(k-1); idx--) {
                        if (arr[idx][j] == '#')
                            c = 0;
                    }
                    if (c)
                        score[i][j]++;
                }
                else if (i != 0 && i != n-1 && j == 0 && arr[i][j] == '.') {
                    //cjeck right
                    if (j+(k-1) <= n-1) {
                        bool c = 1;
                        for(int idx = j; idx <= j+(k-1); idx++) {
                            if (arr[i][idx] == '#')
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
                    if (i+(k-1) <= n-1) {
                        bool c = 1;
                        for(int idx = i; idx <= i+(k-1); idx++) {
                            if (arr[idx][j] == '#') 
                        }
                    }
                }
                else if (i != 0 && i != n-1 && j == n-1 && arr[i][j] == '.') {
                    
                }
                
                else if (i == 0 && j == 0 && arr[i][j] == '.') {
                    
                }
                else if (i == 0 && j == n-1 && arr[i][j] == '.') {
                    
                }
                else if (i == n-1 && j == 0 && arr[i][j] == '.') {
                    
                }
                else if (i == n-1 && j == n-1 && arr[i][j] == '.') {
                    
                }
                else {
                    if (arr[i][j] == '.')
                }
            }
        }
    }
}
