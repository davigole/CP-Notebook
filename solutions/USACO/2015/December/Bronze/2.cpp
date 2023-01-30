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
    
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int N, M; cin >> N >> M;

    int start = 0;
    vi limits(100);
    
    for (int i=0; i<N; i++) {
        int length, speed;
        cin >> length >> speed;

        for (int j=start; j<(start + length); j++) {
            limits[j] = speed;
        }

        start += length;
    }

    start = 0;
    vi over(100);
    for (int i=0; i<M; i++) {
        int length, speed;
        cin >> length >> speed;

        for (int j=start; j<(start + length); j++) {
            over[j] = speed - limits[j];
        }

        start += length;
    }

    cout << max(0, *max_element(over.begin(), over.end()));
}