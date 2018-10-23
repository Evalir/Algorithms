#include <bits/stdc++.h>
using namespace std;

int match(string s, string t) {
    int pos = 0, best = 0;
    for(int i = 0; i < t.size()-(s.size()-1); i++) {
        int cnt = 0;
        for(int j = i; j < i+s.size(); j++) {
            if (s[j-i] == t[j]) cnt++;
        }
        if (cnt > best) {
            pos = i;
            best = cnt;
        }
    }
    return pos;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    string s,t;
    char buf[1010];
    scanf("%s", buf);
    s = buf;
    scanf("%s", buf);
    t = buf;
    int pos = match(s,t);
    vector<int> ans;
    for(int i = pos; i < pos+s.size(); i++) {
        if (t[i] != s[i-pos]) ans.push_back(i-pos);
    }
    printf("%d\n", ans.size());
    for(auto i : ans) printf("%d ", i + 1);
    return 0;
}