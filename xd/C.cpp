#include <bits/stdc++.h>
using namespace std;

void fact(unordered_map<int,long long>&f, int x){
    if(x==1) return;
    int aux=x;
    for(int i=2;i*i<=aux;i++){
        if(aux%i==0){
            f[i]+=x;
            while(aux%i==0) aux/=i;
        }
    }
    if(aux>1) f[aux]+=x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        unordered_map<int,long long>facts;
        for(int i=0;i<n;i++){
            int q;
            cin>>q;
            fact(facts, q);
        }

        vector<int>factsX;
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                factsX.push_back(i);
                while(x%i==0) x/=i;
            }
        }
        if(x>1) factsX.push_back(x);

        long long ans=0;
        for(auto fct:factsX) ans=max(ans, facts[fct]);
        cout<<ans<<"\n";
    }

    return 0;
}