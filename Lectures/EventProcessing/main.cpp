#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

struct Event {
    int x;
    char type;
};

int N;
int L[100004], R[100004];

void solve() {
    for(int i = 0; i < N; i++)
        cin >> L[i] >> R[i];

    vector<Event> events;

    for(int i = 0; i < N; i++) {
        events.push_back({L[i], 'E'});
        events.push_back({R[i], 'X'});
    }

    sort(events.begin(), events.end(),
         [&] (Event a, Event b) -> bool {
             if (a.x != b.x) return a.x < b.x;
             return a.type < a.type;
         });
    int cnt = 0;
    int ans = 0;
    for(Event e : events) {
        if (e.type == 'E') {
            ++cnt;
            ans = max(cnt,ans);
        }
        else
            --cnt;
    }

    cout << ans << endl;

}

int main() {

    vector<int> points = {3,2,10,4};
    vector<int> cp = points;
    sort(cp.begin(), cp.end());
    map<int, int> ccomp;
    for(int i = 0; i < (int)cp.size(); i++) {
        ccomp[i] = cp[i];
    }

    for(auto x : ccomp) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}