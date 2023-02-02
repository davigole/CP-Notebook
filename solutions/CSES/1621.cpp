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
    
    int n; cin >> n;
    uset<int> nums;

    for (int i=0; i<n; i++) { int x; cin >> x; nums.insert(x); }
    cout << nums.size();
}