#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main(){
    ull n;
    cin>>n;
    ull sum=0;
    for(ull i=0;i<n-1;i++){
        ull x;
        cin>>x;
        sum+=x;
    }
    cout<<(n*(n+1)/2)-sum;
    return 0;
}