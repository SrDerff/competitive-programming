#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

int main(){
    
    ull n;
    cin>>n;
    ull prev=0;
    ull count=0;
    for(ull i=0;i<n;i++){
        ull x;
        cin>>x;
        if(x<prev){
            count+=(prev-x);
            x=prev;
        } 
        prev=x;
    }
    cout<<count;
    return 0;
}