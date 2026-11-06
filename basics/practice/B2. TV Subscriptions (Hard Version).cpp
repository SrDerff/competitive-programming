#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,d;
        cin>>n>>k>>d;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int slow=0;
        map<int,int>shw;
        int ans=n;
        for(int i=0;i<n;i++){
            shw[v[i]]++;
            if(i-slow+1==d){
                ans=min(ans, (int)shw.size());
            }
            if(i-slow+1==d){
                shw[v[slow]]--;
                if(shw[v[slow]]<=0) shw.erase(v[slow]);
                slow++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}