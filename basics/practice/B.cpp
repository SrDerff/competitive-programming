#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>frq(101, 0);
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            frq[x]++;
        }

        int cnt=n;

        while(cnt){
            for(int i=100;i>=0;i--){
                if(frq[i]>0){
                    cout<<i<<" ";
                    frq[i]--;
                    cnt--;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}