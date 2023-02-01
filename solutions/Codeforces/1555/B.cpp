#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set


struct Rect {
    ll x1, y1, x2, y2; // x2 > x1, y2 > y1;
    
    ll height() { return y2-y1; }
    ll width() { return x2-x1; }
    ll area() { return height()*width(); }
};

double solve() {
    int W, H, w, h;
    Rect table;
    cin >> W >> H;
    cin >> table.x1 >> table.y1 >> table.x2 >> table.y2;
    cin >> w >> h;

    if (W < w || H < h) return -1;

    ll spaceLeft = table.x1;
    ll spaceRight = W-table.x2;
    ll spaceBottom = table.y1;
    ll spaceTop = H-table.y2;

    if (spaceLeft >= w || spaceRight >= w || spaceBottom >= h || spaceTop >= h) return 0;

    bool canMoveHor = ((max(spaceLeft, spaceRight) + min(spaceLeft, spaceRight)) >= w);
    bool canMoveVer = ((max(spaceTop, spaceBottom) + min(spaceTop, spaceBottom)) >= h);

    if (!canMoveHor && !canMoveVer) return -1;

    double best = -1;
    if (canMoveHor) best = w-max(spaceLeft, spaceRight);
    if (canMoveVer) {
        ll dist = h-max(spaceBottom, spaceTop);
        if (dist < best || best == -1) best = dist;
    }

    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    cout << setprecision(9);
    for (int i=0; i<t; i++) cout << solve() << '\n';
}