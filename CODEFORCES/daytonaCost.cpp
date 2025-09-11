/*
    The first line of each test case contains two integers n
    and k (1≤n≤100, 1≤k≤100) — the number of elements in array and the element which must be the most common.

    The second line of each test case contains n integers a1, a2, a3, …, an (1≤ai≤100) — elements of the array.
*/

#include <bits/stdc++.h>
using namespace std;

// void solve() {
//     // Implementation of the solution goes here
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        bool found = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == k) found = true;
        }

        if(found)   cout<<"Yes\n";
        else        cout<<"No\n";

        
        // solve();
    }
    return 0;
}
