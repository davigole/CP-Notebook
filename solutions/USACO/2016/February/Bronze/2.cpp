#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set


int n;
vi cows;

int getDist(int from, int to) {
    if (from == to) return 0;
    if (from < to) return to-from;
    return n-from + to;
}

int getTotalDist(int door) {
    int dist = 0;
    for (int i=0; i<n; i++) {
        if ((i+1) == door) continue;
        dist += cows[i]*getDist(door, i+1);
    }

    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    
    cin >> n;
    cows.resize(n);
    for (auto& i : cows) cin >> i;

    int best = -1;
    for (int i=0; i<n; i++) {
        int d = getTotalDist(i+1);
        best = (best == -1) ? d : min(best, d);
    }

    cout << best;
}