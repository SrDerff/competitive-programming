#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&v, int qr, int m){
    int n=v.size();
    int p1=0,p2=n-1;
    int right=n;
    while(p1<=p2){
        int mid=(p1+p2)/2;
        if(v[mid]>=qr){
            right=mid;
            p2=mid-1;
        }
        else{
            p1=mid+1;
        }
    }
    if(right==n) return m-v[n-1];
    if(right==0) return v[0]-1;

    int l=v[right-1];
    int r=v[right];
    return (r-l)/2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        vector<int>v(m);
        for(int i=0;i<m;i++) cin>>v[i];
        sort(v.begin(),v.end());
        for(int i=0;i<q;i++){
            int qr; cin>>qr;
            cout<<solve(v,qr,n)<<"\n";
        }
    }
    return 0;
}