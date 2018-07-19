#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> A,B;
    for(int i = 0; i < n; i++) {
        string S;
        cin >> S;
        bool va = true;
        if (va) A.push_back(S);
    }
    for(int i = 0; i < n; i++) {
        bool va = true;
        string S;
        cin >> S;
        if (va) B.push_back(S);
    }

    vector<bool> match(300), match2(300);
    int ans = 0;
    int anw = 0;
    for(int i = 0; i < (int)B.size(); i++) {
        for(int j = 0; j < (int)A.size(); j++) {
            if (A[i] == B[j] && !match[i] && !match2[j]) {
                ++ans;
                match[i] = true;
                match2[j] = true;
            }

        }
    }
    cout << n-ans << endl;

    return 0;
}