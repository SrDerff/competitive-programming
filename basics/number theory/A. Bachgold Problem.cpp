#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int cnt=0;
    int x=0;
    if(n%2!=0){
        n-=3;
        cnt++;
        x=1;
    }
    cnt+=n/2;
    cout<<cnt<<"\n";
    if(x==1)
        cout<<3<<" ";
    for(int i=0;i<n/2;i++){
        cout<<2<<" ";
    }
    return 0;
}