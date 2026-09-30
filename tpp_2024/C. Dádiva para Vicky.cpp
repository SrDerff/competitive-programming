#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;

    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    stack<ll>st;
    ll max_n=LLONG_MIN;
    ll cnt=0;
    vector<pair<ll,ll>>ps;
    for(ll i=0;i<n;i++){
        ll crr=v[i];
        if(!st.empty() && st.top()==crr){
            ll top=st.top();
            cnt++;
            st.pop();
            max_n=max(crr, max_n);
            ps.push_back({crr, crr});
        }else{
            st.push(crr);
        }
    }
    sort(ps.begin(), ps.end(), [](auto a, auto b){
        return a.second<b.second;
    });
    ll ans=0;
    if(cnt%k==0 && cnt!=0){
        for(int i=0;i<k-1;i++){
            ans+=ps[i].first*1;
        }
        ans+=max_n*(cnt-k+1);
        cout<<ans;
    }
    else cout<<"-1";
    return 0;
}