#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<bool>v(26+1, 0);
        vector<char>st(n, 0);
        
        for(int i=0;i<n;i++) cin>>st[i];

        bool fl=true;
        for(int i=1;i<n;i++){
            if(st[i]==st[i-1]){
                continue;
            }else if(v[st[i]-'A']){
                fl=false;
                break;
            }else{
                v[st[i-1]-'A']=true;
            }
        }
        cout<<(fl?"YES":"NO")<<"\n";
    }
    return 0;
}