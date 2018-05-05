#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> st;
    
    for(int i = 0 ; i < n; i++) {
        string s;
        cin >> s;
        st.push_back(s);
    }
    
    sort(st.begin(), st.end());
    
    for(int i = 0; i < n; i++) {
        cout << st[i];
    }
    
    return 0;
}
