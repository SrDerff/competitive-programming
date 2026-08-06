#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

ll gcd(ll a, ll b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        cout<< (a / gcd(a,b)) * b <<"\n";
    }

    return 0;
}