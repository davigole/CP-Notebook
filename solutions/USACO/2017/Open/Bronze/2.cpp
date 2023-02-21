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
    
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int N, M;
    cin >> N >> M;
    vector<unordered_multiset<char>> sCols(M), pCols(M);


    for (int row=0; row<N; row++) {
        for (int col=0; col<M; col++) {
            char c;
            cin >> c;
            sCols[col].insert(c);
        }
    }

    for (int row=0; row<N; row++) {
        for (int col=0; col<M; col++) {
            char c;
            cin >> c;
            pCols[col].insert(c);
        }
    }

    int out = 0;
    for (int col=0; col<M; col++) {
        bool found = true;
        
        for (char c : pCols[col]) {
            if (sCols[col].count(c)) {
                found = false;
                break;
            }
        }

        if (found) out++;
    }

    cout << out;
}