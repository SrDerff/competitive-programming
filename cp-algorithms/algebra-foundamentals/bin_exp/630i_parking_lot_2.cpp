#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

ll bin_pow(ll b, ll e){
    ll result=1;
    while(e>0){
        if(e&1){
            result=(result*b);
        }
        b*=b;
        e>>=1;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;
    cout<<(9*n-3)*bin_pow(4, n-3);
    
    return 0;
}