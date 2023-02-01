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

ll inter(const Rect& r1, const Rect& r2) {
    ll interX = abs(max(r1.x1, r2.x1) - min(r1.x2, r2.x2));
    ll interY = abs(max(r1.y1, r2.y1) - min(r1.y2, r2.y2));

    return interX*interY;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Rect white, black1, black2;
    cin >> white.x1 >> white.y1 >> white.x2 >> white.y2;
    cin >> black1.x1 >> black1.y1 >> black1.x2 >> black1.y2;
    cin >> black2.x1 >> black2.y1 >> black2.x2 >> black2.y2;

    // Cut black pieces that lie outside of the white rectangle
    black1.x1 = min(white.x2, max(black1.x1, white.x1));
    black1.x2 = max(black1.x1, min(black1.x2, white.x2));
    black1.y1 = min(white.y2, max(black1.y1, white.y1));
    black1.y2 = max(black1.y1, min(black1.y2, white.y2));

    black2.x1 = min(white.x2, max(black2.x1, white.x1));
    black2.x2 = max(black2.x1, min(black2.x2, white.x2));
    black2.y1 = min(white.y2, max(black2.y1, white.y1));
    black2.y2 = max(black2.y1, min(black2.y2, white.y2));

    // Result = white.area() - blackArea
    ll blackArea = black1.area() + black2.area() - inter(black1, black2);
    ll whiteArea = white.area() - blackArea;

    if (whiteArea > 0) cout << "YES";
    else cout << "NO";
}