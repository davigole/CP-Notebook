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
    
    string S;
    cin >> S;

    ll best = 1;
    ll len = 0;
    char cur = ' ';

    for (char c : S) {
        if (c != cur) {
            best = max(best, len);
            cur = c;
            len = 1;
        } else len++;
    }

    best = max(best, len);
    cout << best;
}