#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define sz(x) (ll)(x).size()
#define rep(i, a, b) for (ll i=(a); i<(b); i++)
#define vin vector<int>
#define vll vector<ll>
#define vch vector<char>
#define vpii vector<pair<int,int>>
#define vpll vector<pair<ll,ll>>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define MOD 1e9+7
#define str string

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin>>n>>x;

    map<ll,vll>pos;
    vll v(n);
    rep(i,0,n){
        cin>>v[i];
        pos[v[i]].push_back(i);
    }
    
    sort(v.begin(), v.end());

    rep(i,0,n){
        ll k=i+1, j=n-1;

        while(k<j){
            ll sum=v[i]+v[j]+v[k];

            if(sum==x){
                ll p1,p2,p3;
                p1=pos[v[i]][0];
                rep(q,0,pos[v[j]].size()){
                    if(pos[v[j]][q]!=pos[v[i]][0]){
                        p2=pos[v[j]][q];
                        break;
                    }
                }
                rep(q,0,pos[v[k]].size()){
                    if(pos[v[k]][q]!=p2 && pos[v[k]][q]!=p1){
                        p3=pos[v[k]][q];
                        break;
                    }
                }
                cout<<p1+1<<" "<<p2+1<<" "<<p3+1;
                return 0;
            }else if(sum<x){
                k++;
            }else if(sum>x){
                j--;
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
