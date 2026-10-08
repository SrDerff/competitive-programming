#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int64_t fastpow(int64_t a, int64_t b){
    int64_t result=1;
    while(b){
        if(b&1){
            result=(result*a)%MOD;
        }
        a=(a*a)%MOD;
        b>>=1;
    }
    return result;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int>pr(n);
    vector<int>exp(n);

    for(int i=0;i<n;i++){
        cin>>pr[i];
        cin>>exp[i];
    } 

    int64_t nd=1;
    for(int i=0;i<n;i++) nd=(nd*(exp[i]%MOD+1)%MOD)%MOD;

    int64_t sm=1;
    for(int i=0;i<n;i++){
        sm=(sm*((fastpow(pr[i], exp[i]+1)-1)/(pr[i]-1)))%MOD;
    }

    int64_t x=1;
    for(int i=0;i<n;i++) x=(x*fastpow(pr[i], exp[i]))%MOD;
    int64_t xp=nd/2;
    int64_t pd=fastpow(x, xp);

    cout<<nd<<" "<<sm<<" "<<pd;

    return 0;
}