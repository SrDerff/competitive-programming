#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull =  unsigned long long;

int main(){
    ull n;
    cin>>n;
    for(ull i=1;i<=n;i++){
        ll size=i*i;
        ll total_pos = size*(size-1)/2;
        ll invalid_pos = 4*(i-2)*(i-1);
        cout<<total_pos-invalid_pos<<"\n";
    }
    return 0;
}