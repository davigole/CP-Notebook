#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set

int N;
vi flowers;


int calc(int start, int end) {
    int sum = 0;
    int num = (end-start+1);

    for (int i=start; i<=end; i++) sum += flowers[i];

    if ((sum % num) != 0) return 0;
    int avg = sum/num;

    for (int i=start; i<=end; i++) {
        if (flowers[i] == avg) {
            return 1;
        }
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    flowers.resize(N);
    for (auto& i : flowers) cin >> i;

    int out = N;

    for (int i=0; i<N; i++) {
        for (int j=(i+1); j<N; j++) {
            out += calc(i, j);
        }
    }

    cout << out;
}