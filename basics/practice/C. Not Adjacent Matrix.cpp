#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        if(n==2){
            cout<<-1<<"\n";
            continue;
        }
        int c1=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<c1<<" ";
                c1+=2;
                if(c1>(n*n)) c1=2;
            }
            cout<<"\n";
        }
    }
    return 0;
}