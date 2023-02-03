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
    
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    vector<string> board(3);
    for (int i=0; i<3; i++) cin >> board[i];

    vector<uset<char>> lines(8);

    for (int y=0; y<3; y++) {
        for (int x=0; x<3; x++) {
            lines[y].insert(board[y][x]);
        }
    }
    for (int x=0; x<3; x++) {
        for (int y=0; y<3; y++) {
            lines[3+x].insert(board[y][x]);
        }
    }
    for (int x=0; x<3; x++) {
        lines[6].insert(board[x][x]);
        lines[7].insert(board[x][2-x]);
    }

    uset<char> individuals;
    uset<string> teams;

    for (auto l : lines) {
        if (l.size() == 1)
            individuals.insert(*(l.begin()));
        else if (l.size() == 2) {
            auto it = l.begin();
            char first = *it;
            char second = *(++it);
            
            if (first > second) swap(first, second);
            string s = "";
            s += first + second;
            teams.insert(s);
        }
    }

    cout << individuals.size() << '\n' << teams.size();
}