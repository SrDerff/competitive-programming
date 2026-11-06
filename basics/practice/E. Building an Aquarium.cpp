#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll p1=0,p2=x+*max_element(v.begin(),v.end());
        ll ans=0;
        while(p1<=p2){
            ll mid=(p1+p2)/2;
            ll cnt=0;
            for(int i=0;i<n;i++){
                cnt+=max(0LL, mid-v[i]);
                if(cnt>x) break;
            }
            if(cnt<=x){
                p1=mid+1;
                ans=max(ans,mid);
            }else{
                p2=mid-1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}