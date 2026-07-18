/*
Time O(n)
Space O(n)
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n;
    cin>>k;
    vector<int>v(n);
    int val;
    int cont=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i]=x;
        if(i==k-1) val=v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]>=val && v[i]>0) cont++;
    }
    cout<<cont;
    return 0;
}