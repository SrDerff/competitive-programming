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
        ll cnt=1;
        ll vl=1;
        while(1){
            vl*=2;
            cnt+=vl;
            if(n%cnt==0){
                cout<<n/cnt<<"\n";
                break;
            }
        }
    }
    return 0;
}