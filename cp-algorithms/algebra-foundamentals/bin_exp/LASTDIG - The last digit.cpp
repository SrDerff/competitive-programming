#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

int MOD = 10;

int bin_pow(ll base, ll exp){
    int result=1;
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
    
    int t;
    cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        cout<<bin_pow(a,b)<<"\n";
    }

    return 0;
}