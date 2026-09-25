#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        ll cnt=0;
        unordered_map<ll,ll>frq;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt+=frq[x-(i+1)];
            frq[x-(i+1)]++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}