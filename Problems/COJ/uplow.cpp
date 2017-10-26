#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    string S;
    int low = 0;
    int high = 0;
    cin >> N >> S;
    
    for(int i = 0; i < S.length(); i++) {
	if (S[i] >= 97 &&  S[i] <= 122) low++;
	else high++;
    }
    
    cout << high << " " << low << endl;
    return 0;

}