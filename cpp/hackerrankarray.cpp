#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n; // reads the number of integers that will come
    vector<int> vi;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> vi[i]; //This is why I wrote this file. I didn't know you could do that! It's saving 2 lines. Ex below. *1
    }

    //reverse for loop to print backwards (vi.size() - 1 is to not get out of bounds, and we need to count until index 0)
    for (int i = vi.size() - 1; i > 0; i--){
    	cout << arr[i] << " ";
    }

    return 0;

}

/*1 This style of writing the input of a vector saves us two lines on the for loop, as follows
 * instead of:
 * 	int x = 0 (declared above)
 * 	for...
 *  	    cin >> x;
 *  	    vi.push_back(x);
 * we can do:
 * 	for...
 * 	    cin >> vi[i];
 * which is much, much simpler.
 * */

