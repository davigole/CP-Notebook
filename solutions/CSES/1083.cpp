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

    vector<ll> nums(n-1);
    for (auto& i : nums) cin >> i;
    sort(nums.begin(), nums.end());

    ll last = 0;
    for (ll i : nums) {
        if (i != (last + 1)) {
            cout << (last + 1);
            return 0;
        }
        last = i;
    }

    cout << n;
}