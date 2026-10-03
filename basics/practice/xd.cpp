#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n;
    vector<int>v(3);
    for(int i=0;i<3;i++) cin>>v[i];
    sort(v.begin(), v.end());
    a=v[0];
    b=v[1];
    c=v[2];
    int alim=n/a;
    int blim=n/b;
    int ans=0;
    for(int i=0;i<=alim;i++){
        for(int j=0;j<=blim;j++){
            int curr=a*i+b*j;
            if(curr>n) break;
            if((n-curr)%c!=0) continue;
            int k=(n-curr)/c;
            ans=max(ans, i+j+k);
        }
    }
    cout<<ans;
    return 0;
}