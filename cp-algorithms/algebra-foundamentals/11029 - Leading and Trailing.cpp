#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

ll bexp(ll b, ll e, ll MOD=1000){
    b%=MOD;
    ll result=1;
    while(e>0){
        if(e&1){
            result=(result*b)%MOD;
        }
        b = (b*b)%MOD;
        e >>= 1;
    }
    return result;
}

int leading(ll n, ll k){
    double x = k*(log10(n));
    double exp = x-floor(x);
    return (int)(pow(10.0, exp + 2) + 1e-9);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        cout<<leading(n,k)<<"...";
        cout << setw(3) << setfill('0') << bexp(n, k) << '\n';
    }
    return 0;
}