#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

ll MOD = 1e9+7;

ll bin_exp(ll base, ll exp){
    ll result=1;
    while(exp>0){
        if(exp&1){
            result=(result*base)%MOD;
        }
        base=(base*base)%MOD;
        exp>>=1;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==1) cout<<1;
        else if(n%3==0){
            cout<<bin_exp(3, n/3)%MOD;
        }else if (n%3==1){
            cout<<4 * bin_exp(3,((n-4)/3))%MOD; // replace a 3+1 for a 2+2
        }
        else if(n%3==2){
            cout<<bin_exp(3, n/3)*2%MOD; // add a *2
        }
        cout<<"\n";
    }

    return 0;
}