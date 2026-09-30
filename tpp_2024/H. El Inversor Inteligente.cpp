#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    double n,p; cin>>n>>p;
    vector<pair<double,double>>ps(n);
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        ps[i].first=x;
        ps[i].second=i;
    }
    sort(ps.begin(), ps.end());
    if(ps[0].first>=p){
        cout<<n*100;
        return 0;
    }
    double lst_usd=ps[0].second;
    double amnt=(ps[0].second+1)*100/ps[0].first;
    for(int i=1;i<n;i++){
        if(ps[i].second<lst_usd){
            continue;
        }    
        if(ps[i].first>p) break;
        amnt+=100*(ps[i].second-lst_usd)/ps[i].first;
        lst_usd=ps[i].second;
    }
    cout<<fixed<<setprecision(10)<<p*amnt+100*(n-lst_usd-1);
    return 0;
}