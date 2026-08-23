#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;

long long binary_exp(long long base, long long exp){
    long long result=1;
    while(exp>0){
        if(exp & 1){
            result = (base * result) % MOD;
        }
        base=(base * base) % MOD;
        exp>>=1;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    cout<<binary_exp(2, n);
    return 0;
}