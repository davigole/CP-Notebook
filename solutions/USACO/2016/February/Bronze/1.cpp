#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set

int X, Y, M;

int findBest(int milk) {
    static map<int, int> dp;
    if (dp.count(milk)) return dp[milk];

    int res;
    if (milk >= Y) res = min(findBest(milk-X), findBest(milk-Y));
    else if (milk >= X) res = findBest(milk-X);
    else res = milk;

    dp[milk] = res;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    
    cin >> X >> Y >> M;
    cout << M - findBest(M);
}