#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set

struct Rect {
    int x1, y1, x2, y2; // x2 > x1; y2 > y1;

    int width() { return x2-x1; }
    int height() { return y2-y1; }
    int area() { return width()*height(); }

    int isInside(int x, int y) { return (x >= x1 && x <= x2 && y >= y1 && y <= y2); }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    Rect back, front;
    cin >> back.x1 >> back.y1 >> back.x2 >> back.y2;
    cin >> front.x1 >> front.y1 >> front.x2 >> front.y2;

    int cornersCovered = 0;
    if (front.isInside(back.x1, back.y1)) cornersCovered++;
    if (front.isInside(back.x1, back.y2)) cornersCovered++;
    if (front.isInside(back.x2, back.y1)) cornersCovered++;
    if (front.isInside(back.x2, back.y2)) cornersCovered++;

    if (cornersCovered == 4)
        cout << 0;
    else if (cornersCovered <= 1)
        cout << back.area();
    else {
        int interX = abs(max(front.x1, back.x1) - min(front.x2, back.x2));
        int interY = abs(max(front.y1, back.y1) - min(front.y2, back.y2));

        cout << back.area() - interX*interY;
    }
}