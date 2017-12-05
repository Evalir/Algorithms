#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long llong;
int main()
{
    int T;
    cin >> T;
    vector<int> A;
    
    for(int i = 0; i < T; i++) {
        int x;
        cin >> x;
         A.push_back(x);
    }
    
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        long long goal = 0;
        int day = 0;
        long long x;
        cin >> x;
        for(int j = 0; j < A.size(); j++) {
            goal += A[j];
            if (goal >= x) {
                day = j + 1;
                break;
            }
            else day = -1;
        }
        
        cout << day << endl;
        
    }
    
    return 0;
}
