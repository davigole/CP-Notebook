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
    
    int ages[3];
    cin >> ages[0] >> ages[1] >> ages[2];

    sort(ages, ages+3);
    cout << ages[1];
}