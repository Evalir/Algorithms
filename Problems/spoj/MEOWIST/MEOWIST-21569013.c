#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
    
    bool  operator<  ( const Person& right ) const {
        if (age > right.age)
           return true;
        else if (age == right.age && name < right.name)
            return true;
        else
            return false;
     }
};

int main() {
    vector<Person> qq;
    Person p;
    while(cin >> p.name >> p.age) {
        qq.push_back(p);
    }
    
    sort(qq.begin(), qq.end());
    
    for(auto x : qq) {
        cout << x.name << endl;
    }
    
    return 0;
    
}
