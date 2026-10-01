#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k2,k3,k5,k6; cin>>k2>>k3>>k5>>k6;

    int first=min({k2,k5,k6});
    cout<<first*256+min(k2-first, k3)*32;

    return 0;
}