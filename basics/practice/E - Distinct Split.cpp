#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        vector<int>pref(n),suf(n);
        set<char>st;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!st.count(s[i])){
                st.insert(s[i]);
                cnt++;
            }
            pref[i]=cnt;
        }

        cnt=0;
        set<char>st2;
        int ans=0;
        for(int i=n-1;i>=1;i--){
            if(!st2.count(s[i])){
                st2.insert(s[i]);
                cnt++;
            }
            ans=max(ans, pref[i-1]+cnt);
        }
        cout<<ans<<"\n";
    }
    return 0;
}