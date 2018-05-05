#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
    ios_base::sync_with_stdio (false);
    while(cin >> S) {
    //scanf("%s", &S);
    if (S[0] == '.')
        break;
    int r;
    scanf("%d", &r);
        for(int i = 0; i < S.size(); i++) {
            for(int j = 0; j < r; j++) {
                //printf("%s",S);
                cout << S;
            }
                printf("\n");
            //for(int k = 0; k < S.size()-1; k++)
            for(int j = 0; j < S.size()-1; j++) {
                char temp = S[j+1];
                S[j+1] = S[j];
                S[j] = temp;
            }
        }
    }
    return 0;
}
