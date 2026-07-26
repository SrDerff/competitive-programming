#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
int main(){
    ll n;
    cin>>n;
    ll sum = n*(n+1)/2;
    if(sum%2==0){
        cout<<"YES\n";
        ll rem = sum/2;
        vector<bool>used(n+1,false);
        ll count=0;
        for(ll i=n;i>=1;i--){
            if(rem<i){
                used[rem]=true;
                rem=0;
                count++;
                break;
            }
            else if(i<=rem){
                used[i]=true;
                count++;
                rem-=i;
            }
            if(rem==0) break;
        }
        cout<<count<<"\n";
        for(ll i=1;i<=n;i++){
            if(used[i]) cout<<i<<" ";
        }
        cout<<"\n"<<n-count<<"\n";
        for(ll i=1;i<=n;i++){
            if(!used[i]) cout<<i<<" ";
        }
    }else{
        cout<<"NO";
    }
    return 0;
}