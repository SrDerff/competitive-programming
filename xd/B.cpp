#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    deque<pair<long long,long long>>dq;
    while(t--){
        int q;
        long long x,c;
        cin>>q;
        if(q==1){
            cin>>x>>c;
            dq.push_back({x,c});
        }else{
            long long res=0;
            cin>>c;
            long long cp=c;
            while(cp){
                pair<long long,long long>&p=dq.front();
                long long tk=min(cp, p.second);
                res+=p.first*tk;
                cp-=tk;
                p.second-=tk;
                if(p.second==0) dq.pop_front();
            }
            cout<<res<<"\n";
        }
    }
    return 0;
}