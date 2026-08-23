#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

int main(){
    ull n;
    cin>>n;
    vector<ll>v(n, 0);
    for(ull i=0;i<n;i++){
        ll x;
        cin>>x;
        v[i]=x;
    }

    sort(v.begin(), v.end());

    ll s1=0,s2=0;
    for(ll i=v.size()-1; i>=0; i--){
        if(s1<s2) s1+=v[i];
        else s2+=v[i];
    }

    cout<<abs(s1-s2);
    return 0;
}