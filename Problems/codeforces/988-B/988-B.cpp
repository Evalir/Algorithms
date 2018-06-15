#include <bits/stdc++.h>
using namespace std;

struct compare {
    bool operator()(const std::string& first, const std::string& second) {
        return first.size() < second.size();
    }
};

int main() {
    int n;
    cin >> n;
    vector<string> st;
    for(int i = 0; i < n; i++) {
	    string S;
	    cin >> S;
	    st.push_back(S);
    }
    compare c;
    sort(st.begin(),st.end(),c);
    bool ok = true; 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            int k = st[i].find(j);
            if (k == -1) {    
                ok = false;
                break;
            }
            else
                continue;
        
        }
        if (!ok)
            break;
    }
    if (ok) {
        cout << "YES" << endl;
	    for(int i = 0; i < n; i++) {
	        cout << st[i] << endl;
	    }
    }
    else
	cout << "NO" << endl;
    return 0;
}
