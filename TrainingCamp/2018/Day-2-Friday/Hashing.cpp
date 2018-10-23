#include <bits/stdc++.h>
using namespace std;
using Long = long long;

const int M = 1e9 + 33; //big ass prime number
const int BASE = 37;
int hashStr(const string &S) {
    Long rem = 0;
    const int N = S.size();
    for(int i = 0; i < N; i++) {
        rem = rem*10 + (S[i] - '0');
        rem = rem % M;
    }
    return rem;
}

int powBmodM(int k) {
    //get B^k % M
    long long res = 1;
    for(int i = 0; i < k; i++) {
        res = (res * BASE) % M;    
    }
    return res;
}

int main() {
    //int h1 = hashStr("100000");
    //cout << h1 << endl;
    string T, P;
    T = "";
    P = "";
    int P8M = powBmodM((int)P.size() - 1);
    int hashP = hashStr(P);
    int hashT = hashStr(T.substr(0, P.size()));
    if (hashP == hashT) {
        cout << "Pattern matched in string P" << endl;
    }
    
    
    return 0;
}
