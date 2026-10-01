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
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        unordered_map<long long, long long>movs;

        long long cont_ones=0;
        for(int i=0;i<n;i++){
            string num=to_string(v[i]);
            long long mv=0;
            while(1){
                if(num=="1"){
                    cont_ones++;
                    break;
                }else if(num=="4"){
                    movs[mv%8]++;
                    break;
                }
                long long x=0;
                for(int j=0;j<num.size();j++){
                    x+=(num[j]-'0')*(num[j]-'0');
                }
                num=to_string(x);
                mv++;
            }
        }

        long long ans=(cont_ones)*(cont_ones+1)/2-cont_ones;
        for(auto x: movs){
            if(x.second>1) ans+=(x.second)*(x.second+1)/2-x.second;
            //cout<<x.first<<" "<<x.second<<" ";
        }
        //cout<<"\n";
        cout<<ans<<"\n";
    }
    return 0;
}