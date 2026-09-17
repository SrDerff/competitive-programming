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

    ll n;
    cin>>n;

    map<ll,ll>frq;
    frq[0]++;
    ll curr=0;
    ll cnt=0;

    rep(i,0,n){
        ll x;
        cin>>x;
        curr+=x;

        ll rem=curr%n;
        if(rem<0)
            rem+=n;

        cnt+=frq[rem];
        frq[rem]++;
    }

    cout<<cnt;

    return 0;
}
