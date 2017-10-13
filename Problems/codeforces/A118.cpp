//Problem A118 String task from codeforces
//by evalir.io

#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch) {
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
         return true;
    else return false;
}

int main() {
    string task;
    string ns;
    cin >> task;

    for(int i = 0; i < task.length(); i++) {
	task[i] = tolower(task[i]);
    }

    for (int i = 0; i < task.length(); i++) {

    	if (isVowel(task[i]) ) {       	     	     
	} else {
	    ns += '.';
	    ns += task[i];
	}    
    }

    cout << ns << endl;

    
    return 0;

}
