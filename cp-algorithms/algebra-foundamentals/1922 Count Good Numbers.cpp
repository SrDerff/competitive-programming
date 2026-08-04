#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

ll MOD = 1e9+7;

ll bin_pow(ll bas, ll exp){
    ll result=1;
    while(exp>0){
        if(exp&1){
            result=(result*bas)%MOD;
        }
        bas=(bas*bas)%MOD;
        exp>>=1;
    }
    return result;
}

ll countGoodNumbers(ll n){
    ll evenPos=(n+2-1)/2;
    return (bin_pow(5, evenPos)*bin_pow(4,n-evenPos))%MOD;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;

    cout<<countGoodNumbers(n);
    return 0;
}