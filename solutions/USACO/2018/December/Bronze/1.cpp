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
    
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    int c[3];
    int m[3];

    for (int i=0; i<3; i++) {
        cin >> c[i] >> m[i];
    }

    for (int i=0; i<4; i++) {
        int from = i%3;
        int to = (from == 2) ? 0 : (from+1);

        int sub = min(c[to] - m[to], m[from]);
        m[to] += sub;
        m[from] -= sub;
    }

    cout << m[0] << '\n' << m[1] << '\n' << m[2];
}