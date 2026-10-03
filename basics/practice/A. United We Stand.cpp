#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        int mx=*max_element(a.begin(), a.end());
        vector<int>b,c;
        int svi=0;
        for(int i=0;i<n;i++){
            if(a[i]>=mx) break;
            b.push_back(a[i]);
            svi=i;
        }
        if(b.size()<1){
            cout<<"-1\n";
            continue;
        }
        cout<<b.size()<<" "<<n-b.size()<<"\n";
        for(int i=0;i<svi+1;i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
        for(int i=svi+1;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}