#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set

void applyShuffle(vector<int>& indexes, const vector<int>& shuffles) {
    vi newIndexes(indexes.size());

    for (int i=0; i<(int)(shuffles.size()); i++) {
        newIndexes[i] = indexes[shuffles[i]];
    }

    indexes = newIndexes;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int N; cin >> N;

    vi shuffles(N);
    for (int i=0; i<N; i++) {
        int x; cin >> x; x--;
        shuffles[i] = x;
    }
    
    vi indexes = shuffles;
    vector<string> cows(N);
    for (int i=0; i<N;i ++) cin >> cows[i];

    for (int i=0; i<2; i++) applyShuffle(indexes, shuffles);
    for (int i=0; i<N; i++) cout << cows[indexes[i]] << '\n';
}