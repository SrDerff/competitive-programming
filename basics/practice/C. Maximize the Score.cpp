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
        vector<pair<long long,long long>>v(n, {-1,-1});
        vector<pair<long long, long long>>ps;

        for(long long i=0;i<n*2;i++){
            int x; cin>>x;
            if(v[x-1].first==-1){
                v[x-1].first=i;
            }else v[x-1].second=i;
        }

        sort(v.begin(), v.end(), [](auto a, auto b){
            return a.second-a.first > b.second-b.first;
        });

        vector<int>bs(n, 0);

        long long ans=0;
        for(int i=0;i<n;i++){
            if(ps.size()==0){
                ans+=(v[i].second-v[i].first+1)*(v[i].second-v[i].first+1);
                ps.push_back({v[i].first, v[i].second});
                bs[i]=1;
            }else{
                bool fl=true;
                for(auto x: ps){
                    if((v[i].second>=x.first&&v[i].second<=x.second)
                    && (v[i].first>=x.first&&v[i].first<=x.second)){
                        fl=false;
                        bs[i]=-1;
                        break;
                    }else if((v[i].second>=x.first&&v[i].second<=x.second)
                    || (v[i].first>=x.first&&v[i].first<=x.second)){
                        fl=false;
                        break;
                    }
                }
                if(!fl) continue;
                ans+=(v[i].second-v[i].first+1)*(v[i].second-v[i].first+1);
                ps.push_back({v[i].first, v[i].second});
                bs[i]=1;

                for (int j=0;j<n;j++) {
                    if (j==i||bs[j]==-1)
                        continue;

                    long long a=v[j].first;
                    long long b=v[j].second;

                    bool aInside=(a>=v[i].first&&a<=v[i].second);
                    bool bInside=(b>=v[i].first&&b<=v[i].second);

                    if (aInside^bInside) {
                        long long other=aInside?b:a;
                        for(auto x:ps){
                            if(other>=x.first&&other<=x.second){
                                bs[j]=-1;
                                break;
                            }
                        }
                    }
                }
            }
        }

        for(auto x: bs) ans+=(x==0);
        cout<<ans<<"\n";
    }
    return 0;
}