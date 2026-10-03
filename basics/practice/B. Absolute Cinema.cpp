#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long>v1(n);
        vector<long long>v2(n);
        long long cnt=0;
        long long maxa=0;
        for(int i=0;i<n;i++)cin>>v1[i];
        for(int i=0;i<n;i++)cin>>v2[i];
        
        for(int i=0;i<n;i++){
            if(v1[i]>v2[i]){
                maxa=max(maxa, v2[i]);
                swap(v2[i],v1[i]);
            }
            else{
                maxa=max(maxa, v1[i]);
            }
            cnt+=v2[i];
        }

        cout<<cnt+maxa<<"\n";
    }
    return 0;
}