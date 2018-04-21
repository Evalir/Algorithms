#include <iostream>
#include <string>
using namespace std;

struct Point {
  int x, y;
    
};
int main() {
    int n;
    cin >> n;
    string moves;
    cin >> moves;
    int k = 2; //start at intersection.
    int ans = 0;
    
    Point fafa;
    fafa.x = 0;
    fafa.y = 0;
    for(int i = 0; i < n; i++) {
        if (moves[i] == 'R')
            fafa.x++;
    
        if (moves[i] == 'U')
            fafa.y++;

        //check x
        if (k == 0 && (moves[i] == 'R')) {
           // cerr << "x at " << i << endl;
            ans++;
            k = 2;
        }
        else if (k == 1 && (moves[i] == 'U')) {
            //cerr << "y at " << i << endl;
            ans++;
            k = 2;
        }
        else
            k = 2;
        //if below kingdom 2 ()
        if ((fafa.x == fafa.y) && (moves[i] == 'U')) {
           // cerr << "crossing v at " << i << ' ' << moves[i] << endl;
            k = 1; //represents crossing from y
        }
        else if ((fafa.x == fafa.y) && (moves[i] == 'R')) {
           // cerr << "crossing h at " << i << ' ' << moves[i] << endl;
            k = 0; // crossing from x
        }
        
    }
    
    
    cout << ans << endl;
    return 0;
}
