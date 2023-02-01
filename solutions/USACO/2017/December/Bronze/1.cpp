#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set


struct Rect {
    int x1, y1, x2, y2;

    int getWidth() { return abs(x2-x1); }
    int getHeight() { return abs(y2-y1); }
    int getArea() { return getWidth()*getHeight(); }
};

istream& operator>>(istream& in, Rect& rect) {
    in >> rect.x1 >> rect.y1 >> rect.x2 >> rect.y2;
    return in;
}


int inter(Rect r1, Rect r2) {
    int w = max(min(r1.x2, r2.x2) - max(r1.x1, r2.x1), 0);
    int h = max(min(r1.y2, r2.y2) - max(r1.y1, r2.y1), 0);

    return w*h;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    Rect b1, b2, t;
    cin >> b1 >> b2 >> t;

    cout << b1.getArea() + b2.getArea() - inter(b1, t) - inter(b2, t);
}