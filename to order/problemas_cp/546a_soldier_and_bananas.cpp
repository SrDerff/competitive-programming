#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    long long total=((w*(w+1))/2)*k;
    cout<<(total<n?0:total-n);
    return 0;
}