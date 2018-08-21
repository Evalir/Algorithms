#include <iostream>
#include <cmath>
#include <stack>
#include <map>
using namespace std;

int main() {
    string S;
    cin >> S;
    stack<char> st;
    for(auto i : S) {
        if (i == 'A')
            st.push(i);
        else if (i == 'B' && !st.empty()) {
            st.pop();
        }
        else if (i == 'B' && st.empty()) {
            cout << "Nao" << endl;
            return 0;
        }
    }
    if (st.empty()) {
        cout << "Sim" << endl;
    }
    else {
        cout << "Nao" << endl;
    }

    return 0;
}