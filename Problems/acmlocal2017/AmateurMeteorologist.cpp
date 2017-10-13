//Amateur meteorologist COJ.UCI.CU 3935 evalir

#include <iostream>
#include <vector>
using namespace std;

int main() {

  int d;
  string day;
  vector<string> days;
  int pred = 0;

  cin >> d;

  for(int i = 0; i < d; i++) {
    cin >> day;
    days.push_back(day);
  }

  for (int i = 0; i < days.size(); i++) {

    if (i == 0) {

      if (days[i] == "sunny") pred++;
      
    } else {
      
      if (days[i] == "sunny" && days[i - 1] == "sunny") {
      pred++;
      }
      else if (days[i] == "rainy") {
        if (days[i] == "rainy" && days[i - 1] == "rainy") pred++;

        else if (i >= 3 && days[i - 3] == "cloudy" && days[i - 2] == "cloudy" && days[i - 1] == "cloudy" && days[i] == "rainy") { pred++; }
      
      }
      else if (days[i - 1] == "cloudy" && days[i] == "cloudy") pred++;
    
    }
  }

  cout << pred << endl;
  


}
