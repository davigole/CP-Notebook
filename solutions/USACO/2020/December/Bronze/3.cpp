#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set


struct Cow {
    char dir;
    int x, y;

    Cow() = default;
};

constexpr int INF = numeric_limits<int>::max();

int N;
vector<Cow> cows;
map<int, int> dp;


int getDist(int idx) {
    if (dp.count(idx)) return dp[idx];

    Cow cow = cows[idx];
    int dist = INF;

    for (int i=0; i<N; i++) {
        if (i == idx) continue;
        
        Cow c = cows[i];
        int d = -1;

        int cDist, cowDist;

        if (cow.dir == 'E') {
            if (c.x <= cow.x || c.y > cow.y) continue;
            cDist = (cow.y - c.y);
            cowDist = (c.x - cow.x);
        } else {
            if (c.x > cow.x || c.y <= cow.y) continue;
            cDist = (cow.x - c.x);
            cowDist = (c.y - cow.y);
        }

        if ((cDist == 0) || (c.dir != cow.dir && cDist < cowDist && cDist < getDist(i))) d = cowDist;
        if (d == -1) continue;

        dist = min(dist, d);
    }

    dp[idx] = dist;
    return dist;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    cows.resize(N);
    
    for (auto& i : cows) cin >> i.dir >> i.x >> i.y;
    for (int i=0; i<N; i++) {
        int d = getDist(i);
        if (d == INF) cout << "Infinity";
        else cout << d;

        cout << '\n';
    }
}