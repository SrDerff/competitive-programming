#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

int main(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n<=3){
        cout<<"NO SOLUTION";
        return 0;
    }

    for(ll i =2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(ll i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    return 0;
}