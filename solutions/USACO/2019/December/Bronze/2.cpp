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

    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    
    int N;
    cin >> N;

    string S;
    cin >> S;


    for (int k=2; k<(N-1); k++) {
        unordered_multiset<string> seq;

        for (int i=0; i<(N-k); i++) {
            seq.insert(S.substr(i, k+1));
        }


        bool found = true;
        for (auto it=seq.begin(); it!=seq.end(); it++) {
            if (seq.count(*it) > 1) {
                found = false;
                break;
            }
        }

        if (found) {
            cout << (k + 1);
            return 0;
        }
    }

    cout << N;
}