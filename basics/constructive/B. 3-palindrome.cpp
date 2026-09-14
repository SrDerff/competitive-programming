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
    
    string s(n, 'a');
    bool v=false;
    for(ll i=1;i<n;i+=2){
        if(v){
            s[i]='a';
            s[i+1]='a';
            v=false;
        }else{
            s[i]='b';
            s[i+1]='b';
            v=true;
        }
    }

    rep(i,0,n){
        cout<<s[i];
    }
    return 0;
}
