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

    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    
    int N; cin >> N;
    vi usedBuckets(1001, 0); // 1-indexed

    for (int i=0; i<N; i++) {
        int s, t, b; cin >> s >> t >> b;

        for (int j=s; j<t; j++) {
            usedBuckets[j] += b;
        }
    }

    cout << *max_element(usedBuckets.begin(), usedBuckets.end());
}