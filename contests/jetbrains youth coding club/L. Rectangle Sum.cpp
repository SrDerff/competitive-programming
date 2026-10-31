#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll h,w,q;
    cin>>h>>w>>q;
    vector<vector<ll>>v(h+1,vector<ll>(w+1, 0));
    for(int i=1;i<h+1;i++){
        for(int j=1;j<w+1;j++){
            ll x; cin>>x;
            v[i][j]+=v[i-1][j]+v[i][j-1]-v[i-1][j-1]+x;
        }
    }
    for(int i=0;i<q;i++){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<v[c][d]-v[a-1][d]-v[c][b-1]+v[a-1][b-1]<<"\n";
    }
    return 0;
}