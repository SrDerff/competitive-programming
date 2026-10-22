#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n,x,y; cin>>n>>x>>y;
        vector<ll>v(n);
        ll sm=0;
        for(ll i=0;i<n;i++){ cin>>v[i]; sm+=v[i]; }
        sort(v.begin(),v.end());
        ll ans=0;
        for(ll i=0;i<n-1;i++){
            ll prev=v[i];
            ll p1=i+1,p2=n-1;
            ll start=i;
            ll end=i;
            while(p1<=p2){
                ll mid=(p1+p2)/2;
                ll sb=v[mid];
                if(sm-sb-prev>=x){
                    start=mid;
                    p1=mid+1;
                }else{
                    p2=mid-1;
                }
            }
            p1=i+1,p2=n-1;
            while(p1<=p2){
                ll mid=(p1+p2)/2;
                ll sb=v[mid];
                if(sm-sb-prev>y){
                    end=mid;
                    p1=mid+1;
                }
                else{
                    p2=mid-1;
                }
            }
            if(start!=-1)
                ans+=(start-end);
        }
        cout<<ans<<"\n";
    }
    return 0;
}