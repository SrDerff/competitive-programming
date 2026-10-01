#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n; char b;
        cin>>n>>b;

        string s1;
        cin>>s1;

        string s2=s1;
        reverse(s2.begin(), s2.end());

        int ans=0;
        for(int i=0;i<n/2;i++){
            if(s1[i]!=s2[i]){
                if(s1[i]==b || s2[i]==b) ans++;
                else ans+=2;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}