#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<ll>v(n);
    ll sm=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sm+=v[i];
    }
    if(sm%3!=0){
        cout<<0<<"\n"; return 0;
    }
    ll t=sm/3;
    ll t2=t*2;
    ll crr=0;
    ll fcrr=0;
    ll ans=0;
    for(int i=0;i<n-1;i++){
        crr+=v[i];
        if(crr==t2&&i>0) ans+=fcrr;
        if(crr==t) fcrr++;
    }
    cout<<ans<<"\n";
    return 0;
}