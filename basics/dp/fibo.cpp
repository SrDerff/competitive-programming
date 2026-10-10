#include <bits/stdc++.h>
using namespace std;

long long regular_fibo(long long n){
    if(n<=1) return n;
    return regular_fibo(n-1)+regular_fibo(n-2);
}

//tabulacion (bottom-up) -> resuelve desde los subproblemas mas pequeños hasta el grande 
long long dp_fibo_tab(long long n){
    vector<long long>dp(n+1);
    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];
}

//memoizacion (top-down) -> resuelve desde arriba hacia abajo y va memorizando
vector<long long>dpmemo;

long long dp_fibo_memo(long long n){
    if(n<=1) return n;
    if(dpmemo[n]!=-1){
        return dpmemo[n];
    }
    dpmemo[n]=dp_fibo_memo(n-1)+dp_fibo_memo(n-2);
    return dpmemo[n];
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;

    //cout<<regular_fibo(n);
    cout<<dp_fibo_tab(n)<<"\n";

    dpmemo.assign(n+1, -1);
    cout<<dp_fibo_memo(n);

    return 0;
}