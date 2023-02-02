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

    vi nums(N);

    for (int i=0; i<N; i++) {
        int a;
        cin >> a;

        if (a == 0) nums.pop_back();
        else nums.pb(a);
    }

    int sum = 0;
    for (auto i : nums) sum += i;
    cout << sum;
}