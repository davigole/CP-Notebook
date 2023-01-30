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
    
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int M, N, K; cin >> M >> N >> K;

    string out = "";

    for (int i=0; i<M; i++) {
        string line; cin >> line;
        string outline = "";

        for (char x : line) {
            for (int j=0; j<K; j++) outline += x;
        }
        for (int j=0; j<K; j++) out += outline + '\n';
    }

    cout << out;
}