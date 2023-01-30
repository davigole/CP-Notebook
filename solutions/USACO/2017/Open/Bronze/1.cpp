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
    
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y; cin >> x >> y;
    int dir=1, dist=0, step=1;

    while (true) {
        if (((dir == 1) && (x<y) && (x+step)>=y) || ((dir == -1) && (x>y) &&(x-step)<=y)) { dist += abs(x-y); break; }

        step *= 2;
        dist += step;
        dir *= -1;
    }

    cout << dist;
}