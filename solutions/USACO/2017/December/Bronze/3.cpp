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

    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);
    
    int N;
    cin >> N;

    vector<tuple<int, char, int>> reg(N);
    for (int i=0; i<N; i++) {
        int day, incr;
        string name;

        cin >> day >> name >> incr;
        reg[i] = make_tuple(day, name[0], incr);
    }
    sort(reg.begin(), reg.end());

    map<char, int> prod;
    prod['B'] = 7;
    prod['E'] = 7;
    prod['M'] = 7;

    int out = 0;
    vector<char> ranking = {'B', 'E', 'M'};
    for (int i=0; i<N; i++) {
        prod[get<1>(reg[i])] += get<2>(reg[i]);

        int best = -1;
        vector<char> newRanking; newRanking.reserve(3);
        
        for (auto it=prod.begin(); it!=prod.end(); it++) {
            if (it->second > best) { newRanking.clear(); best = it->second; }
            if (it->second == best) newRanking.pb(it->first);
        }

        if (newRanking != ranking) {
            out++;
            ranking = newRanking;
        }
    }

    cout << out;
}