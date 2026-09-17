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

    string s;
    cin>>s;

    ll n=sz(s);

    ll cnt_v=0;
    ll cnt_h=0;

    rep(i,0,n){
        if(s[i]=='0'){
            if(cnt_v==0)
                cout<<1;
            else if(cnt_v==1)
                cout<<3;
            cout<<" 1\n";
            cnt_v+=1;
            if(cnt_v>=2){
                cnt_v=0;
            }
        }
        else{
            cout<<cnt_h+1<<" 2\n";
            cnt_h+=1;
            if(cnt_h>=4){
                cnt_h=0;
            }
        }
    }

    return 0;
}
