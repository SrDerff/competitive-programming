/*
El problema de la escalera: 
Tienes una escalera de (n) escalones. En cada movimiento puedes subir 1 o 2 escalones.
¿De cuántas formas distintas puedes llegar exactamente al escalón (n)?
*/

#include <bits/stdc++.h>
using namespace std;

vector<long long>dp;

long long solve_memo(long long cl, long long n){
    if(cl==n) return 1;
    else if(cl>n) return 0;

    if(dp[cl]!=-1) return dp[cl];

    dp[cl]=solve_memo(cl+1, n)+solve_memo(cl+2, n);
    return dp[cl];
}

long long solve_tab(long long n){
    vector<long long>dptab(n+1);
    dptab[0]=1;
    dptab[1]=1;
    for(long long i=2;i<=n;i++){
        dptab[i]=dptab[i-1]+dptab[i-2];
    }
    return dptab[n];
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    dp.assign(n+1, -1);
    cout<<solve_memo(0,n)<<"\n";
    cout<<solve_tab(n)<<"\n";

    return 0;
}