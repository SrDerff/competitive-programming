#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int lim=n/k;
        int tcnt=0;
        for(int i=0;i<lim;i++){
            int pcnt=0;
            for(int j=0;j<k;j++){
                char x;
                cin>>x;
                pcnt+=(x-'0')==0;
            }
            tcnt+=pcnt<1;
        }
        cout<<tcnt<<"\n";
    }
    return 0;
}