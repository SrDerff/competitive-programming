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
        ll n; cin>>n;
        string s;
        cin>>s;

        ll frq_1=0;
        ll frq_0=0;

        ll first_one=n;
        ll last_zero=-1;

        rep(i,0,n){
            if(s[i]=='1'){
                frq_1++;
                first_one=min(first_one, i);
            }else if(frq_1>0){
                frq_0++;
                last_zero=max(last_zero, i);
            }
        }

        if(s[0]=='1'){
            cout<<frq_0<<"\n";
            continue;
        }
        if(first_one==-1){
            cout<<"0"<<"\n";
            continue;
        }
        if(last_zero<first_one){
            cout<<0<<"\n";
            continue;
        }

        ll lo=-1;
        ll cnt=0;
        
        vll suf(n + 1, 0);
        for(ll i=n-1;i>=0;i--){
            suf[i]=suf[i+1]+(s[i]=='0');
        }

        ll ans=n+1;
        ll ns=0;

        rep(i,first_one,n+1) {
            ll current_ops=ns+suf[i];
            ans = min(ans, current_ops);
            if (i<n && s[i]=='1') {
                ns++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
