#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

ll MOD = 1e7+7;

ll binExp(ll base, ll exp){
    ll result=1;
    base%=MOD;
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
    
    ll n,k;
    while(cin>>n>>k){
        if(n==0&&k==0) break;

        cout<<(2*binExp(n-1, k)%MOD+2*binExp(n-1, n-1)%MOD+binExp(n,k)%MOD+binExp(n,n)%MOD)%MOD<<"\n";
    }

    return 0;
}