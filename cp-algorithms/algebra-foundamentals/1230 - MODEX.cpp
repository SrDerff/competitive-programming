#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

ll bexp(ll b, ll e, ll MOD){
    ll result=1;
    b=b%MOD;
    while(e>0){
        if(e&1){
            result= (result * b) % MOD;
        }
        b = (b*b)%MOD;
        e>>=1;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll x,y,n;
        cin>>x>>y>>n;
        cout<<bexp(x,y,n)<<"\n";
    }
    int x;
    cin>>x;
    return 0;
}