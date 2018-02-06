#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        if (S[0] == 'h' && S[1] == 'y' && S[2] == 'd' && S[3] == 'r' && S[4] == 'o') {
            if (S[S.length()-1] == 'c' && S[S.length()-2]=='i') {
                cout << "non-metal acid" << endl;
            }
            else {
                cout << "not an acid" << endl;
            }
        }
        else if (S[S.length()-2]=='i' && S[S.length()-1]=='c') {
            cout << "polyatomic acid" << endl;
        }
        else {
            cout << "not an acid" << endl;
        }
    }
    
    return 0;
}




// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         string S;
//         cin >> S;

//         if (S.length() < 2)
//         {
//             cout << "not an acid" << endl;
//         }
//         else if (S.length() == 2 && S[0] == 'i' && S[1] == 'c') {
//             cout << "polyatomic acid 1" << endl;
//         }
//         else {
//             if (S[0] == 'h' && S[1] == 'y' && S[2] == 'd' && S[3] == 'r' && S[4] == 'o') {
//                 if (S[S.length() - 2] == 'i' && S[S.length() - 1] == 'c') {
//                     cout << "non-metal acid" << endl;
//                 }
//             }

//             else if (S[S.length() - 2] == 'i' && S[S.length() - 1] == 'c') {
//                     cout << "polyatomic acid" << endl;
//             }
//             else {
//                 cout << "not an acid" << endl;
//             }

//         }
//     }

//     return 0;
// }

