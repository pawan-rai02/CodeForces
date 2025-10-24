#include <iostream>
#include <vector>
#include <numeric> 

#define ll long long int
#define pb push_back
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define vprint(v) for (auto it : v) cout << it << " ";cout<<endl;
#define wholelist(v) (v).begin(),(v).end()
#define srt(v) sort(wholelist(v))
#define minEle(v) min_element(wholelist(v))
#define maxEle(v) max_element(wholelist(v))
#define lb(v,x) lower_bound(wholelist(v),x)-v.begin()
#define ub(v,x) upper_bound(wholelist(v),x)-v.begin()

#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define vpll vector<pair<ll,ll>>
#define sll set<ll>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif

using namespace std;

void solve(){

    int n, k;
    cin >> n >> k;

    vector<int> counts(n + 1, 0);
    for (int i = 0; i < n; ++i){
        int a;
        cin >> a;
        if (a <= n) { 
            counts[a]++;
        }
    }

    vector<long long> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; ++i){
        prefixSum[i] = prefixSum[i - 1] + counts[i];
    }

    
    for (int d = n; d >= 1; --d) {
       
        int limit = min(n, 4 * d - 1);

        long long totalInRange = prefixSum[limit];

        long long multInRange = 0;
        for (int j = d; j <= limit; j += d){

            multInRange += counts[j];
        }

        long long eraseNeeded = totalInRange - multInRange;

        if (eraseNeeded <= k) {
            cout << d << "\n";
            return; 
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}