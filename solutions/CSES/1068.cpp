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
    
    ll n;
    cin >> n;
    cout << n << ' ';

    while (n != 1) {
        if ((n % 2) == 0) n/=2;
        else n=(n*3)+1;

        cout << n << ' ';
    }
}