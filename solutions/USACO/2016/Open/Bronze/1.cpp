#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set

int N, K;
vi diamonds;

int calc(int d) {
    int n = 0;

    for (auto i : diamonds) {
        if ((i >= d) && (i-d) <= K) n++;
    }

    return n;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    
    cin >> N >> K;
    diamonds.resize(N);
    for (auto& i : diamonds) cin >> i;

    int best = 0;
    for (auto i : diamonds) best = max(best, calc(i));

    cout << best;
}