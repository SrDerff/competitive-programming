#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll lowbit(ll x){ return x&-x; }
ll legendre(ll n, ll p){
    ll ans=0;
    while(n>0){
        ans+=n/p;
        n/=p;
    }
    return ans;
}

ll buscar_min(ll p, ll k){
    if(k==0) return 0;
    ll i=1;
    ll j=(p-1)*k+p*60;
    ll ans=j;
    while(i<=j){
        ll mid=(i+j)/2;
        if(legendre(mid, p)>=k){
            ans=mid;
            j=mid-1;
        }else{
            i=mid+1;
        }

    }
    return ans;
}

int main(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    
    ll n2=buscar_min(2, a);
    ll n3=buscar_min(3, b);
    ll n4=buscar_min(5, c);
    ll n5=buscar_min(7, d);

    ll n=max({n2,n3,n4,n5});
    ll lp=legendre(n,2LL);
    cout<<n<<" "<<lp;
    return 0;
}