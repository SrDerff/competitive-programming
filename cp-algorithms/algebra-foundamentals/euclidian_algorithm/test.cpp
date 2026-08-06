#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

ll gcd(ll a, ll b){
    while(b){
        ll t = a%b;
        a=b;
        b=t;
    }
    return a;
}

ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll a,b;


    return 0;
}