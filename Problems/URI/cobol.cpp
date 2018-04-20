#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string S;
	while(cin >> S) {
		set<char> let;
		for(int i = 0;i  < S.size(); i++) {
			S[i] = tolower(S[i]);
		}	

		vector<string> words;
		int idx = 0;
		bool psb = 0;
		for(int i = 0; i < S.size(); i++) {
			if (S[i] == '-'){
				idx++;
				psb = 0;
			}
			else
				if (psb) {
					words.push_back("");
					words[idx] += S[i];
					psb = true;
				}
				else {
					words[idx] += S[i];
				}
		}

		for(int i = 0; i < words.size(); i++) {
			for(int j = 0; j < words[i].size(); j++) {
				cout << words[i];
			}
			cout << endl;
		}
	}
}