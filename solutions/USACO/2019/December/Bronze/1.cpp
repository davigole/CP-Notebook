#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set


int K, N;
vector<vector<uset<int>>> sessions;

uset<int> getInter(const uset<int>& u1, const uset<int>& u2) {
    uset<int> o;
    for (int i : u1) { if (u2.count(i)) o.insert(i); }

    return o;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    
    cin >> K >> N;
    sessions.resize(K);
    for (auto& i : sessions) i.resize(N+1);

    for (auto& session : sessions) {
        vector<int> cows(N);
        
        for (int i=0; i<N; i++) {
            int cow;
            cin >> cow;
            cows[i] = cow;

            if (i == 0) continue;
            for (int j=0; j<i; j++) session[cows[j]].insert(cow);
        }
    }

    int out = 0;
    for (int cow=1; cow<=N; cow++) {
        uset<int> greaterThan = sessions[0][cow];
        for (int s=1; s<K; s++) greaterThan = getInter(greaterThan, sessions[s][cow]);

        out += greaterThan.size();
    }

    cout << out;
}