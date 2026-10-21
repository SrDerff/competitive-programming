#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=s[i]!='0';
        }
        cout<<ans<<"\n";
        for(int i=0;i<n;i++){
            if(s[i]!='0'){
                cout<<s[i];
                for(int j=i+1;j<n;j++) cout<<"0";
                cout<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}