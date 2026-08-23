#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main(){
    ll n;
    cin>>n;
    ll res = (n/10)*2;
    if(n%10>=5) res++;
    cout<<res; 
    return 0;
}