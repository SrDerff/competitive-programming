#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    map<int,int>mp;
    while(t--){
        int t;
        cin>>t;
        if(t==1){
            int x;cin>>x;
            mp[x]++;
        }
        if(t==2){
            int x; cin>>x;
            int m;cin>>m;
            mp[x]-=min(m, mp[x]);
            if(mp[x]==0) mp.erase(x);
        }
        if(t==3){
            cout<<(mp.rbegin()->first)-mp.begin()->first<<"\n";
        }
    }
    return 0;
}