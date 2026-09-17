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

    ll n,k,s;
    cin>>n>>k>>s;

    if(s%(n-1)==0 || (k>s/(n-1))){
        ll p=s/(n-1);
        ll rm_l=s-(n-1)*p;
        ll rm_m=p-1;

        bool x=1;
        while(p-- ){
            if(x){
                cout<<10<<" ";
                x=false;
            }else{
                cout<<"1 ";
                x=true;
            }
        }
        
        ll i=0;
        ll dff;
        if(!x){
            i=n;
            dff=-1; 
        }else{
            i=1;
            dff=1;
        }

        ll q=rm_m;
        while(q--){
            cout<<i+dff<<" ";
            i+=dff;
            rm_l--;
        }

        if(dff>0){
            cout<<i+rm_l;
        }else{
            cout<<i-rm_l;
        }

    }else{
        cout<<"NO";
    }

    return 0;
}
