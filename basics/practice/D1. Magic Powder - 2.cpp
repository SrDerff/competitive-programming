#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>v[i].second;
    }
    sort(v.begin(),v.end(), [](auto a, auto b){
        return a.second/a.first<b.second/b.first;
    });
    ll p1=0,p2=2e9+1;
    ll ans=0;
    while(p1<=p2){
        ll mid=(p1+p2)/2;
        ll cnt=0;
        for(ll i=0;i<n;i++){
            ll tt=mid*v[i].first;
            if(tt>v[i].second){
                cnt+=(tt-v[i].second);
            }
            if(cnt>m) break;
        }
        if(cnt<=m){
            ans=max(ans, mid);
            p1=mid+1;
        }else{
            p2=mid-1;
        }
    }
    cout<<ans;
    return 0;
}