#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;

        vector<int>nms(n);
        for(int i=0;i<n;i++){
            int x; cin>>nms[i];
        }

        sort(nms.begin(), nms.end());

        int ans=0;
        for(int i=0;i<m;i++){
            int x; cin>>x;
            auto it=upper_bound(nms.begin(), nms.end(), k-x);
            ans+=it-nms.begin();
        }
        cout<<ans<<"\n";
    }
    return 0;
}