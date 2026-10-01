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

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll v(n);
        rep(i,0,n) cin>>v[i];
        ll flt=1;
        rep(i,0,n){
            rep(j,i+1,n){
                if(v[j]==v[i]) flt++;
                if((v[j]-v[i])==(j-i-1)){
                    flt++;
                    i=j-1;
                    break;
                }
            }
        }
        cout<<flt<<"\n";
    }

    return 0;
}
