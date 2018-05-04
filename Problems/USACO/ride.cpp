/*
ID: enrique9
TASK: ride
LANG: C++14
*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>
using namespace std; 
 
int main(){
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    fin >> a >> b;
    int suma = 1, sumb = 1;
    for(int i = 0; i < a.size(); i++) {
		suma *= a[i]-'A' + 1;
	}
	for(int i = 0; i < b.size(); i++) {
		sumb *= b[i]-'A' + 1;
	}
	if (suma % 47 == sumb % 47)
		fout << "GO" << endl;
	else
		fout << "STAY" << endl;
	
    return 0;

}

