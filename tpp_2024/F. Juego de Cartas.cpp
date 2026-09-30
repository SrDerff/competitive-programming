#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,r,z;
    cin>>l>>r>>z;
    vector<int>v(r-l+1);
    for(int i=0;i<(r-l+1);i++) v[i]=l+i;
    int idx1=0, idx2=r-l;
    while(idx1<idx2){
        int sum=v[idx1]+v[idx2];
        if(sum<z) idx1++;
        else if(sum>z) idx2--;
        else {
            while((idx2-1) > (idx1+1)){
                idx2--;
                idx1++;
            }
            break;
        } 
    }
    if(idx2<=idx1) cout<<"no hay respuesta";
    else cout<<v[idx2]<<" "<<v[idx1];
    return 0;
}