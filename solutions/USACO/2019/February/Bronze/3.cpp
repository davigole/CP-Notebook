#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);
    
    int N;
    cin >> N;

    vector<pair<int, pii>> sensors(N);
    
    for (int i=0; i<N; i++) {
        string s;
        int a, b;

        cin >> s >> a >> b;

        int t = 0;
        if (s == "on") t = 1;
        else if (s == "off") t = -1;

        sensors[i] = make_pair(t, make_pair(a, b));
    }

    int a = -9999;
    int b = 9999;

    for (auto it=sensors.rbegin(); it!=sensors.rend(); it++) {
        auto s = *it;

        if (s.first == 0) {
            a = max(a, s.second.first);
            b = min(b, s.second.second);
        } else if (s.first == 1) {
            a -= s.second.second;
            b -= s.second.first;
        } else {
            a += s.second.first;
            b += s.second.second;
        }

    }
    a = max(a, 0);
    b = min(b, 1000);
    cout << a << ' ' << b << '\n';

    a = -9999;
    b = 9999;

    for (auto it=sensors.begin(); it!=sensors.end(); it++) {
        auto s = *it;

        if (s.first == 0) {
            a = max(a, s.second.first);
            b = min(b, s.second.second);
        } else if (s.first == 1) {
            a += s.second.first;
            b += s.second.second;
        } else {
            a -= s.second.second;
            b -= s.second.first;
        }
    }
    a = max(a, 0);
    b = min(b, 1000);
    cout << a << ' ' << b << '\n';
}