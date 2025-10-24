#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'

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

ll gcd(ll a, ll b) {return b==0?a:gcd(b,a%b);}
ll lcm(ll a, ll b) {return (a/gcd(a,b))*b;}
const ll mod=1e9+7;
ll binexp(ll a, ll b) {ll ans=1; while(b) {if(b&1) ans=(ans*a)%mod;a=(a*a)%mod;b>>=1;}return ans%mod;}
ll modInverse(ll A, ll mod) {
    ll m0=mod,y=0,x=1;
    if(mod==1)return 0;
    while(A>1){ll q=A/mod,t=mod;mod=A%mod;A=t;t=y;y=x-q*y;x=t;}
    if (x<0)x+=m0;
    return x;
}


// void solve() {
//     // your code here
    
// }

int main() {
    fastio;
    ll t=1;
    cin>>t;
    while(t--) {
        // solve();
        int n, q;
        cin>>n>>q;

        string s;
        cin>>s;

        vector<ll> queries(q);
        for(int i = 0; i < q; i++){
            cin>>queries[i];
        }

        int countB = 0;
        for(char &c : s){
            if(c == 'B')
                countB++;
        }

        for(int i = 0; i < q; i++){
            
            ll a = queries[i];

            if(countB == 0) {
                cout<<a<<endl;
                continue;
            }

            if(a == 0) {
                cout<<0<<endl;
                continue;
            }

            ll time = 0;
            int pos = 0;

            while(a > 0){
                char c = s[pos];

                if(c == 'A') --a;

                else a = a / 2;

                time++;

                pos = (pos + 1) % n;
            }

            cout<<time<<endl;


        }
       

    }
    return 0;
}