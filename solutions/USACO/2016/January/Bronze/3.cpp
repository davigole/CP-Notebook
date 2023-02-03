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
    
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);

    int N;
    cin >> N;

    map<pii, int> lastTime;

    pii pos (0, 0);
    int time = 0;

    int best = -1;

    for (int i=0; i<N; i++) {
        char D;
        int S;

        cin >> D >> S;

        for (int j=0; j<S; j++) {
            time++;

            if (D == 'N') pos.second++;
            else if (D == 'E') pos.first++;
            else if (D == 'S') pos.second--;
            else pos.first--;

            if (lastTime.count(pos)) best = (best == -1) ? (time-lastTime[pos]) : min(best, time-lastTime[pos]);
            lastTime[pos] = time;
        }
    }

    cout << best;
}