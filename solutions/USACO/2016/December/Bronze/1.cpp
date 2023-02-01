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



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    
    Rect r1, r2;
    cin >> r1 >> r2;

    Rect out;
    out.x1 = min(r1.x1, r2.x1);
    out.x2 = max(r1.x2, r2.x2);
    out.y1 = min(r1.y1, r2.y1);
    out.y2 = max(r1.y2, r2.y2);

    int side = max(out.getHeight(), out.getWidth());

    cout << side*side;
}