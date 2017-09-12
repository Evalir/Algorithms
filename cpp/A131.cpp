//Problem A131 from codeforces
//By evalir.io

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string caps;
    int counter = 0;

    cin >> caps;

    for(int i = 0; i < caps.length(); i++) {
      if (caps[i] > 90 && i != 0) counter - 2;
      else if (caps[i] >= 65 && caps[i] <= 90) counter++;
    }

    if( (counter == caps.length() - 1 || counter == caps.length()) {
      for (int i = 0; i < caps.length(); i++) {

        if (caps[i] >= 65 && caps[i] <= 90) caps[i] = tolower(caps[i]);
        if (caps[i] > 90) caps[i] = toupper(caps[i]);

      }
    }

    cout << caps << endl;



    return 0;
}
