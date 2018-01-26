#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int board[10][10];
bool isAttacked(int x, int y, int n) {
    for (int i = 0 ; i < n; i++) {
        if (board[i][y] == 1 && i != x) return true;
    }
    for (int i = 0; i < n; i++) {
        if (board[x][i] == 1 && i != y) return true;
    }
    //check diagonals
    for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ( ((i + j) == (x + y)) || ((i - j) == (x - y)) ) {
					if (((i != x) || (j != y)) && (board[i][j] == 1)) {
						return true;
					}
				}
			}
		}
    
    return false;
}

bool joaPlacesQueens(int n, int dim) {
    //no more queens to place
    if (n == dim) {
        return true;
    }
    
    for(int i = 0; i < dim; i++) {
            if (isAttacked(n,i, dim)) {
                cout << n << ' ' << i << " IS ATTACKED" << endl;
                continue;
            }
            
            board[n][i] = 1;
            cout << i << ' ' << n << " IS NOT ATTACKED" << endl;

            if (joaPlacesQueens(n+1, dim)) {
                return true;
            }
                board[n][i] = 0;
        
    }
    return false;
}

int main() {
    cin >> n;

    //fillboard
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            board[i][j] = 0;
        }
    }
    
    if (joaPlacesQueens(0, n)) {
        cout << "YES" << endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {cout << "NO" << endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    
    }
    
    return 0;
}
















