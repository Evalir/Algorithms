/*
ID: enrique9
TASK: gift1
LANG: C++14
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <fstream>
#include <string>
using namespace std; 

int main(){
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    vector<string> names;
    int n;
    fin >> n;
	map<string,int> fr;
	for(int i = 0; i < n; i++) {
		string S;
		fin >> S;
		fr[S] = 0;
		names.push_back(S);
	}
	for(int i = 0; i < n; i++) {
		string s;
		int a, b;
		fin >> s >> a >> b;
		if (b != 0)
			fr[s] = fr[s] - a + (a%b);
		else
			fr[s] += a;
		for(int j = 0; j < b; j++) {
			string x;
			fin >> x;
			fr[x] += a/b;
		}
	}
	
	for(int i = 0; i < n; i++) {
		fout << names[i] << ' ' << fr[names[i]] << endl;
	}
	
	
    return 0;

}

