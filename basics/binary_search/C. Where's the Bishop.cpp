#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int n=8;
    vector<vector<char>>v(n, vector<char>(n));
    while(t--){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        vector<int>ans={-1,-1};
        for(int i=1;i<n-1;i++){
            bool f=false;
            for(int j=1;j<n-1;j++){
                if(v[i-1][j-1]=='*' && v[i-1][j+1]=='*' && v[i+1][j-1]=='*' && v[i+1][j+1]=='*' && v[i][j]=='*'){
                    f=true;
                    ans[0]=i+1;
                    ans[1]=j+1;
                    break;
                }
            }
            if(f) break;
        }
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}