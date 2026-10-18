#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ans=LLONG_MAX;

void backtrack(vector<ll>&v, int i=0, ll g1=0, ll g2=0){
    if(i>=v.size()){
        ans=min(ans, abs(g1-g2));
        return;
    }

    backtrack(v, i+1, g1+v[i], g2);
    backtrack(v, i+1, g1, g2+v[i]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    backtrack(v);
    cout<<ans;

    return 0;
}