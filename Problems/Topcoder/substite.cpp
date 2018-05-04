#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Substitute {
	public:
		int getValue(string k, string c) {
			int ans = 0;
			for(int i = 0; i < c.size(); i++) {
				for(int j = 0; j < k.size(); j++) {
					if (c[i] == k[j]) {
						ans *= 10;
						if (j != 9)
						ans += j+1;
						break;
					}
				}
			}
			
			return ans;
		}
}
