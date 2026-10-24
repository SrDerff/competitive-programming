#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int diffmod1=-1;
        int diffmod1val=-1;
        int diffmod2=-1;
        int diffmod1val2=-1;
        int pref=0;
        int ans=-1;
        for(int i=0;i<n;i++){
            int q; cin>>q;
            pref+=q;
            if(pref%x!=0 && diffmod1==-1){
                diffmod1=i;
                diffmod1val=pref;
            }
            if(pref%x!=0 && diffmod2==-1 && diffmod1!=-1 && pref%x!=diffmod1val){
                diffmod2=i;
                diffmod1val2=pref;
            }
            if(pref%x!=0){
                ans=max(ans, i+1);
                continue;
            }
            if(diffmod1!=-1 && (pref-diffmod1val)%x!=0){
                ans=max(ans, i-diffmod1);
            }else if(diffmod2!=-1 && (pref-diffmod1val2)%x!=0){
                ans=max(ans, i-diffmod2);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}