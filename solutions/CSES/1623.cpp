#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set

int n;
ll weight[20];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    for (int i=0; i<n; i++) cin >> weight[i];


    ll out = numeric_limits<ll>::max();
    for (int mask=0; mask<(1 << n); mask++) {
        ll sum1=0, sum2=0;
        for (int i=0; i<n; i++) {
            if (mask & (1 << i)) sum1 += weight[i];
            else sum2 += weight[i];
        }

        out = min(out, abs(sum2 - sum1));
    }

    cout << out;
}