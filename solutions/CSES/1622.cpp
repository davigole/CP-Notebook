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
    
    string s; cin >> s;
    sort(s.begin(), s.end());

    vector<string> perms;

    do { perms.pb(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << perms.size() << '\n';
    for (auto i : perms) cout << i << '\n';
}