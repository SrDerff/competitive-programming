#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll max_e=max(x,y);
        ll min_e=min(x,y);
        ll prev = max_e*max_e - max_e + 1;
        if(max_e==min_e){
            cout<<prev;
            cout<<"\n";
            continue;
        }
        ll diff = max_e-min_e;  
        if(min_e==y && max_e%2==0){
            cout<<prev+diff;
            cout<<"\n";
            continue;
        }
        if(min_e==y && max_e%2!=0){
            cout<<prev-diff;
            cout<<"\n";
            continue;
        }
        if(min_e==x && max_e%2==0){
            cout<<prev-diff;
            cout<<"\n";
            continue;
        }
        if(min_e==x && max_e%2!=0){
            cout<<prev+diff;
            cout<<"\n";
            continue;
        }
    }
    return 0;
}