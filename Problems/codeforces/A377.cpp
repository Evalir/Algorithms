#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Node {
  char content;
  int x,y;
  bool isVisited = false;
};

int n, m, k, cp = 0;
int tk;
bool w = 0;
void floodFill(int r, int c, vector< vector<Node> >& V) {
    if (r < 0 || c < 0 || r >= n || c >= m)
        return;
        
    if (V[r][c].isVisited)
        return;
    V[r][c].isVisited = true;
    
    if (V[r][c].content != '.' || V[r][c].content == 'X') {
        w = 1;
        return;
    }
        
    floodFill(r, c+1, V);
    if (w == 1 && tk > 0) {
        w = 0;
        tk--;
        V[r][c].content = 'X';
    }
    floodFill(r, c-1, V);
    if (w == 1 && tk > 0) {
        w = 0;
        tk--;
        V[r][c].content = 'X';
    }
    floodFill(r+1, c, V);
    if (w == 1 && tk > 0) {
        w = 0;
        tk--;
        V[r][c].content = 'X';
    }
    floodFill(r-1, c, V);
    if (w == 1 && tk > 0) {
        w = 0;
        tk--;
        V[r][c].content = 'X';
    }
        
}

void floodAll(vector<vector<Node> >& Mat) {
    for(int i = 0; i < n; i++) {
        for(int j = 0;j < m; j++) {
            if (Mat[i][j].content != '#' && !Mat[i][j].isVisited) {
              //  cp++;
              //  cerr << "n of components: " << cp << " on i j" << i << ' ' << j << endl;
                floodFill(i, j, Mat);
            }
        }
    }
    
} 

void countComponents(vector<vector<Node> >& Mat) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if (Mat[i][j].content != '#' && !Mat[i][j].isVisited && Mat[i][j].content != 'X') {
                    floodFill(i, j, Mat);
                    cerr << "n of components: " << cp << " on i j" << i << ' ' << j << endl;
                    cp++;
                }
            }
        }
}

int main() {
    cin >> n >> m >> k;
    vector< vector<Node> > Mat(n, vector<Node>(m));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> Mat[i][j].content;
        }
    }
    
    for(int i = 0; i < n*m; i++) {
        tk = k;
        floodAll(Mat);
        for(int i =0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                Mat[i][j].isVisited = false;
            }
        }
        
        for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    cout << Mat[i][j].content;
                }
                cout << endl;
        }
        
        countComponents(Mat);
        cerr << "total cp: " << cp << endl;
        if (cp > 1)
            for(int i = 0; i < n; i++) {
                for(int j =0; j < m; j++) {
                    if (Mat[i][j].content == 'X')
                        Mat[i][j].content = '.';
                    Mat[i][j].isVisited = false;
                }
            }
        else if(cp == 1){
            cerr << "Found way " << endl;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    cout << Mat[i][j].content;
                }
                cout << endl;
            }
            
            return 0;
        }
            
        cp = 0;
    }
    
    cout << "found no way" << endl;
    
    
    
}
