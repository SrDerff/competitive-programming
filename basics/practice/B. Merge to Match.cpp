#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<int>v1(n);
        vector<int>v2(m);

        for(int i=0;i<n;i++) cin>>v1[i];
        for(int i=0;i<m;i++) cin>>v2[i];

        sort(v1.rbegin(), v1.rend());
        sort(v2.rbegin(), v2.rend());

        vector<bool>v3(m, false);
        int id2=0;
        bool fl=true;
        int others_needed=0;
        for(int i=0;i<n;i++){
            if(id2>=m){
                if(others_needed>(n-i)) fl=false;
                break;
            }
            if(v1[i]==v2[id2]){
                v3[id2]=true;
                id2++;
                continue;
            }
            if(v1[i]>=v2[id2]){
                others_needed++;
                id2++;
            }
        }
        int idx3=0;
        for(int i=n-1-others_needed;i<n;i++){
            if(idx3>=m) break;
            while(v3[idx3] && idx3<m) idx3++;
            if(idx3>=m) break;
            if(v1[i]<=v2[idx3]) v3[idx3++]=true;
        }
        for(auto x: v3){
            if(!x) fl=false;
        }
        if(id2<m) fl=false;
        cout<<(fl?"YES":"NO")<<"\n";

    }
    return 0;
}