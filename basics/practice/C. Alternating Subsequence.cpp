#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        int x;
        cin>>x;
        
        int maxN=x;
        bool positiveWave=x>0;
        long long ans=0;
        for(int i=0;i<n-1;i++){
            cin>>x;
            if(x<0 && positiveWave){
                positiveWave=false;
                ans+=maxN;
                maxN=x;
                continue;
            }else if(x<0){
                maxN=max(maxN, x);
            }else if(x>0 && !positiveWave){
                positiveWave=true;
                ans+=maxN;
                maxN=x;
            }else{
                maxN=max(maxN, x);
            }
        }
        ans+=maxN;
        cout<<ans<<"\n";
    }
    return 0;
}