#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if((n/2)%2!=0){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        ll c=0;
        for(int i=0;i<n/2;i++){
            c+=2;
            cout<<c<<" ";
        }
        c=1;
        for(int i=0;i<n/2-1;i++){
            cout<<c<<" ";
            c+=2;
        }
        cout<<c+n/2<<"\n";
    }
    return 0;
}