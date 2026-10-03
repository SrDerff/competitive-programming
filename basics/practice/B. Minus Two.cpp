#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int oddmoves=0;
        int evenmoves=0;

        int odds=0;
        int ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            int movs;
            if(x%2==0){
                movs=x/2;
                if(movs%2==0) evenmoves++;
                else oddmoves++;
            }
            else{
                odds++;
            }
        }
        cout<<max(max(evenmoves,oddmoves), odds)<<"\n";
    }
    return 0;
}