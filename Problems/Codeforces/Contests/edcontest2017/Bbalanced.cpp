#include <iostream>
#include <string>
using namespace std;

int main() {
    int nofchars;
    string a;
    int throne;
    cin >> nofchars >> a;
    int r = 0, l = 0;
    int c1 = 0, c0 = 0;
    
    for (int i = 0; i < a.length(); i++) {
	if (a[i] == '1') c1++;
	else c0++;
    }
    if (c1 == c0 && throne < c1) {
	throne = c1;
	}

    cout << throne << endl;
}