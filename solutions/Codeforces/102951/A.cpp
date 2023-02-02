#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set

struct Point {
    ll x, y;
};

ll dist(const Point& p1, const Point& p2) {
    return pow(abs(p1.x - p2.x), 2) + pow(abs(p1.y - p2.y), 2);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;

    vector<Point> points(N);
    for (int i=0; i<N; i++) cin >> points[i].x;
    for (int i=0; i<N; i++) cin >> points[i].y;

    ll best = 0;
    for (int i=0; i<(N - 1); i++) {
        for (int j=0; j<N; j++) {
            best = (best == 0) ? dist(points[i], points[j]) : max(best, dist(points[i], points[j]));
        }
    }

    cout << best;
}