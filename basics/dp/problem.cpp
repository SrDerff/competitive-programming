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

    dp[cl]=solve_memo(cl+1, n)+solve_memo(cl+2, n)+solve_memo(cl+3, n);
    return dp[cl];
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    dp.assign(n+1, -1);
    cout<<solve_memo(0,n);
    return 0;
}