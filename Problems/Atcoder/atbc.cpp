#include <string>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	//comment for submission
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
 	#endif

    string S; int K;
    cin >> S >> K;
    set<string> substr;
    for(int i = 0; i < S.size(); i++) {
    	string N;
        //the len <= K avoids TLE because no substr larger than K is worth getting
    	for(int len = 1; len <= S.size()-i && len <= K; len++) {
    	   N += S[i + len - 1];
    	   substr.insert(N);
        }
    }
    //cout << substr.size() << endl;
    int cnt = 0;
    for(auto x : substr) {
    	cnt++;
    	if(cnt == K) {
    		cout << x << endl;
    		break;
    	}
    	else
    		continue;
    }
	return 0;
}