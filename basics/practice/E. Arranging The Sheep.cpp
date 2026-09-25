#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        string s;
        cin>>s;

        ll cnt=0;
        ll mid=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*') cnt++;
        }
        vector<int>pos(cnt);
        ll idx=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*') pos[idx++]=i;
        }
        mid=cnt/2;
        ll ans=0;
        for(int i=0;i<mid;i++){
            ans+=pos[mid]-(mid-i-1)-1-pos[i];
        }
        for(int i=mid+1;i<cnt;i++){
            ans+=pos[i]-(pos[mid]+1+(i-mid-1));
        }
        cout<<ans<<"\n";
    }

    return 0;
}