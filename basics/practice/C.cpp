#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        sort(v.begin(), v.end(), [&](int a, int b){
            return gcd(a,x)>gcd(b,x);
        });

        long long ans=0;
        for(int i=0;i<n;i++){
            if(gcd(v[i],x)==1) break;
            ans+=gcd(v[i],x);
            x=gcd(v[i],x);
        }

        cout<<ans<<"\n";
    }

    return 0;
}