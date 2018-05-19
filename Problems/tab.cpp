#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    string A,B;
    cin >> A >> B;
    map<char,int> FREQ1,FREQ2;
    for(int i = 0; i < B.size(); i++)
        FREQ2[B[i]]++;
    for(int i = 0; i < A.size(); i++)
        FREQ1[A[i]]++;
    
    bool ok = true;
    for(auto x : FREQ1) {
        if (x.second > FREQ2[x.first])
            ok = false;
    }
    
    if (!ok)
        cout << "NO" << endl;
    else
        cout << "SI" << endl;
        
    return 0;
    
}
