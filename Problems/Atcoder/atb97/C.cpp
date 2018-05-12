
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
set<string> str;
void subString(string s, int n) 
{
    for (int i = 0; i < n; i++) 
        for (int len = 1; len <= n - i; len++)
            str.insert(s.substr(i,len));
}
 
int main() 
{
    string S;
    cin >> S;
    int k;
    cin >> k;
    subString(S, S.size());
    int cnt = 0;
    for(auto x : str) {
        cnt++;
        if (cnt == k) {
            cout << x << endl;
            break;
        }
    }
    return 0;
}
