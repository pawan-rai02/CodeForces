/*
    The first line of each test case contains two numbers n
    and m
    (1≤n⋅m≤25
    ) — the lengths of strings x
    and s
    , respectively.

    The second line of each test case contains the string x
    of length n
    .

    The third line of each test case contains the string s
    of length m
.
*/

#include <bits/stdc++.h>
using namespace std;

void solve(int n, string &x, int m, string &s) {
    // Check if already present
    if (x.find(s) != string::npos) {
        cout << 0 << "\n";
        return;
    }

    string temp = x;
    for (int i = 1; i <= 7; i++) {
        temp += temp;  // double the string
        if (temp.find(s) != string::npos) {
            cout << i << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        solve(n, x, m, s);
    }
    return 0;
}
