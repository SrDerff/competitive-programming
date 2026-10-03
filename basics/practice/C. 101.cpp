#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        int cnt_1=0;
        int cnt_m1=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            cnt_1+=v[i]==1;
            cnt_m1+=v[i]==-1;
        }
        int crr_1=0;
        int crr_m1=0;
        int zrleft=0;
        for(int i=0;i<n;i++){
            if(v[i]==-1){
                crr_m1++;
                if(zrleft==0){
                    cout<<1<<" ";
                    zrleft=1;
                }else if(cnt_1-crr_1>=1){
                    cout<<0<<" ";
                }else if(cnt_m1-crr_m1>=1 && i<n-1){
                    cout<<0<<" ";
                }else{
                    cout<<1<<" ";
                }
            }else{
                zrleft+=v[i]==1;
                crr_1+=v[i]==1;
                cout<<v[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}