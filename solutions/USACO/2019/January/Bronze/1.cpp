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
    
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int N; cin >> N;
    
    vi shells(N);
    for (int i=0; i<N; i++) shells[i] = (i+1);

    vi best(N);
    for (int i=0; i<N; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        swap(shells[a-1], shells[b-1]);
        best[shells[g-1]]++;
    }

    cout << *max_element(best.begin(), best.end());
}