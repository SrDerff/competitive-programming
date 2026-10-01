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
        map<long long,long long>frq;
        map<long long,long long>equals;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            v[i]=x;

            frq[x]++;
        }

        if(frq.begin()->first!=0) {
            cout<<"-1\n";
            continue;
        }

        bool fl=true;
        long long curr=0;
        for(auto it=frq.begin(); it!=frq.end(); it++){
            if(next(it)==frq.end()){
                if(it==frq.begin())
                    equals[it->first]=1;
                else
                    equals[it->first]=equals[prev(it)->first]+1;
                break;
            }
            long long x = (next(it)->first - curr) / it->second;
            if((next(it)->first-curr)%it->second!=0 ||
                x<=0 ||
                (it!=frq.begin()&&x<=equals[prev(it)->first]))
            {
                cout<<"-1\n";
                fl=false;
                break;
            }
            equals[it->first]=(next(it)->first-curr)/it->second;
            curr+=equals[it->first]*frq[it->first];
        }

        if(!fl) continue;
        for(int i=0;i<n;i++){
            cout<<equals[v[i]]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}