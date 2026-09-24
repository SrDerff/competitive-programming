#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define sz(x) (ll)(x).size()
#define rep(i, a, b) for (ll i=(a); i<(b); i++)
#define vin vector<int>
#define vll vector<ll>
#define vch vector<char>
#define vpii vector<pair<int,int>>
#define vpll vector<pair<ll,ll>>
#define vbl vector<bool>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define MOD 1e9+7
#define str string

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,a,b;
    cin>>n>>a>>b;

    vll pref(n+1, 0);
    multiset<ll>ms;

    ll ans=LLONG_MIN;
    rep(i,1,n+1){
        ll x;
        cin>>x;
        pref[i]=pref[i-1]+x;

        if(i>=a)
            ms.insert(pref[i-a]);
        if(i>=b+1)
            ms.erase(ms.find(pref[i-b-1]));
        if(!ms.empty())
            ans=max(ans, pref[i]-*ms.begin());
    }
    cout<<ans;
    return 0;
}
