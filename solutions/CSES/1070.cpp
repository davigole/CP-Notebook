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

    if (N == 2 || N == 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    int even = N/2;
    int odd = N-even;

    int e = 2;
    int o = 1;

    for (int i=0; i<even; i++) {
        cout << e << ' ';
        e += 2;
    }
    for (int i=0; i<odd; i++) {
        cout << o << ' ';
        o += 2;
    }
}