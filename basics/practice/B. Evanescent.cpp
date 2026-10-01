#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int cnt=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]) cnt++;
        }
        int dff=0;
        for(int i=1;i<n-1;i++){
            if(s[i]!=s[i-1] && s[i-1]==s[i+1]){
                dff=-2;
                break;
            }else if(s[i]!=s[i-1] && s[i]!=s[i+1]) dff=-1;
        }
        cout<<cnt+dff<<"\n";
    }
    return 0;
}