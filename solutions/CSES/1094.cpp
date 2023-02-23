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
    
    ll n;
    cin >> n;

    ll out = 0;
    ll last = -1;
    for (int i=0; i<n; i++) {
        ll x;
        cin >> x;

        if (x < last) {
            out += (last - x);
            continue;
        }
        last = x;
    }

    cout << out;
}