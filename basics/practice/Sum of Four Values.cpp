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
#define vbl vector<bool>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define MOD 1e9+7
#define str string

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,x;
    cin>>n>>x;

    vpll v(n);
    rep(i,0,n){
        ll q;
        cin>>q;
        v[i].first=q;
        v[i].second=i+1;
    }

    sort(v.begin(), v.end(), [](pll x1, pll x2){
        return x1.first<x2.first;
    });

    rep(i,0,n-3){
        rep(j,i+1,n-2){
            ll sum=v[i].first+v[j].first;
            ll p1=j+1;
            ll p2=n-1;
            while(p1<p2){
                ll c=sum+v[p1].first+v[p2].first;
                if(c==x){
                    cout<<v[i].second<<" "<<v[j].second<<" "<<v[p1].second<<" "<<v[p2].second;
                    return 0;
                }
                else if(c<x){
                    p1++;
                }
                else if(c>x){
                    p2--;
                }
            }
        }
    }

    cout<<"IMPOSSIBLE";

    return 0;
}
