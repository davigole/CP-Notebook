#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set


int n, x;
vi arr;
map<int, uset<int>> reps;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> x;
    arr.resize(n);
    
    for (int i=0; i<n; i++) {
        int a; cin >> a;
        reps[a].insert(i);
        arr[i] = a;
    }

    for (int i=0; i<n; i++) {
        int left = x-arr[i];
        if (left < 0) continue;

        for (auto it=reps[left].begin(); it!=reps[left].end(); it++) {
            if (*it != i) {
                cout << i+1 << ' ' << *it + 1 << '\n';
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
}