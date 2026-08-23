#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        vector<ll> v(n);

        map<ll,ll> nums;
        map<ll,ll> corr;

        for(auto &x: v){
            cin>>x;
            nums[x]++;
            corr[x]=0;
        }

        ll sum=0;
        pair<ll,ll> last;
        bool val=1;

        for (auto it = nums.begin(); it != nums.end(); ++it) {
            if(it==nums.begin()){
                last.first=it->first;
                last.second=it->second;
                if(nums.size()==1)
                    corr[it->first]=1;
                continue;
            }
            
            ll diff = it->first - sum;

            if(diff <= 0 || diff % last.second != 0){
                val = false;
                break;
            }

            ll x = diff / last.second;

            if(x < last.first){
                val = false;
                break;
            }

            corr[last.first] = x;
            sum += x * last.second;
            
            if (next(it) == nums.end()) {
                corr[it->first] = x + 1;
            }

            last.first=it->first;
            last.second=it->second;
        }

        if(!val || (nums.size()==1 && nums.begin()->first!=0)){
            cout<<"-1\n";
            continue;
        }

        for(auto &x: v){
            cout<<corr[x]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}