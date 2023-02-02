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
    
    int N;
    cin >> N;

    int lastTime = 0;
    pair<char, int> lastEvent;

    map<int, int> answers;
    map<int, int> answerTime;

    for (int i=0; i<N; i++) {
        char t;
        int x;
        
        cin >> t >> x;

        int time;

        if (i == 0) time = 0;
        else if (lastEvent.first == 'T') time += lastEvent.second;
        else if (t == 'T') time = lastTime;
        else time = lastTime + 1;

        if (t == 'R') {
            answers[x] = time;
        } else if (t == 'E') {
            answerTime[x] += time - answers[x];
            answers[x] = -1;
        }

        lastTime = time;
        lastEvent = make_pair(t, x);
    }

    for (auto it=answers.begin(); it!=answers.end(); it++) {
        cout << it->first << ' ';
        if (it->second != -1) cout << -1;
        else cout << answerTime[it->first];

        cout << '\n';
    }

    return 0;
}