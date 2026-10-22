#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b; cin>>n>>a>>b;
    int p1=1,p2=min(a,b);
    int ans=0;
    while(p1<=p2){
        int mid=(p1+p2)/2;
        int amnt=a/mid+b/mid;
        if(amnt>=n){
            ans=mid;
            p1=mid+1;
        }
        else{
            p2=mid-1;
        }
    }
    cout<<ans;
    return 0;
}