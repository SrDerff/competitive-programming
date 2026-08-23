#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    while(n--){
        vector<int>v(3);
        for(auto&x: v){
            cin>>x;
        }
        if(v[0]==v[1] || v[1]==v[2] || v[0]==v[2]){
            cout<<0<<"\n";
            continue;
        }

        sort(v.begin(), v.end());
        cout<<min(v[2]-v[1], v[1]-v[0])<<"\n";
    }

    return 0;
}