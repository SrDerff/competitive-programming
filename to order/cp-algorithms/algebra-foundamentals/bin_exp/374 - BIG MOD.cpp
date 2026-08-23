#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

ll bexp(ll b, ll e, ll MOD){
    b=b%MOD;
    ll result=1;
    while(e>0){
        if(e&1){
            result=(result*b)%MOD;
        }
        b=(b*b)%MOD;
        e>>=1;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll b,e,MOD;
    while(cin>>b>>e>>MOD){
        cout<<bexp(b,e,MOD)<<"\n";
    }
    return 0;
}