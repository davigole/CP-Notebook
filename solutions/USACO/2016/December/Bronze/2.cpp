#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set


int N;
map<char, int> lettersNeeded;

void countLetters(string_view s1, string_view s2) {
    uset<char> letters;
    map<char, int> reps1;
    map<char, int> reps2;

    for (int i=0; i<(int)(s1.length()); i++) { letters.insert(s1[i]); reps1[s1[i]]++; }
    for (int i=0; i<(int)(s2.length()); i++) { letters.insert(s2[i]); reps2[s2[i]]++; }

    for (auto it=letters.begin(); it!=letters.end(); it++) lettersNeeded[*it] += max(reps1[*it], reps2[*it]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    cin >> N;

    for (int i=0; i<N; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        countLetters(s1, s2);
    }

    for (char x='a'; x<='z'; x++) cout << lettersNeeded[x] << '\n';
}