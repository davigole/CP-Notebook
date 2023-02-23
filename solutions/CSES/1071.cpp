#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set


ll getFirst(ll sz) {
    if ((sz % 2) != 0) return (getFirst(sz-1) + 1);
    return sz*sz;
}

void solve() {
    ll x, y;
    cin >> y >> x;

    ll sz = max(x, y);
    ll incr = ((sz % 2) == 0) ? -1 : 1;
    ll first = getFirst(sz);

    ll out = (x < sz) ?
            (first + ((x-1)*incr)) :
            (first + incr*(2*sz-y-1));
    cout << out << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N;
    cin >> N;
    for (ll i=0; i<N; i++) solve();    
}