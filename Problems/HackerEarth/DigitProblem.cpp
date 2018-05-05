#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    for(int i = 0; i < s.size(); i++) {
        if(n > 0 && s[i]  != '9') {
            s[i] = '9';
            n--;
        }
    }
    
    cout << s << endl;
    return 0;
}
