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
    
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

    string S, T;
    cin >> S >> T;

    string out = "";
    for (int i=0; i<S.size(); i++) {
        out += S[i];
        if (out.size() >= T.size() && out.substr(out.size() - T.size(), T.size()) == T) out.resize(out.size() - T.size());
    }

    cout << out;
}