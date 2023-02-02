#include <bits/stdc++.h>
using namespace std;

#define ll	  long long
#define pb	  push_back
#define vi	  vector<int>
#define pii	 pair<int, int>
#define uset	unordered_set


bool isVowel(char x) {
    return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
}

char nearestVowel(char x) {
    char left = x;
    char right = x;

    while (true) {
        if (left > 'a') left--;
        if (right < 'z') right++;

        if (isVowel(left)) return left;
        if (isVowel(right)) return right;
    }
}

char nextConsonant(char x) {
    x++;

    for (; x<'z'; x++) {
        if (!isVowel(x)) break;
    }

    return x;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string P;
    cin >> P;

    string out = "";

    for (int i=0; i<(int)(P.length()); i++) {
        char c = P[i];
        out += c;
        
        if (isVowel(c)) continue;
        out += nearestVowel(c);
        out += nextConsonant(c);
    }

    cout << out;
}