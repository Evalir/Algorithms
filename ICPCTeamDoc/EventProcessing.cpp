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
